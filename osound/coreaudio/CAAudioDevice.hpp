#ifndef CAAUDIODEVICE_HPP
#define CAAUDIODEVICE_HPP

#if defined(__APPLE__)
#  include <TargetConditionals.h>
#endif

#if TARGET_OS_MAC && !TARGET_OS_IOS && !TARGET_OS_TV
#  include <CoreAudio/CoreAudio.h>
#endif

#include <AudioUnit/AudioUnit.h>

#include "AudioDevice.hpp"

namespace osound
{
    namespace coreaudio
    {
        class AudioDevice: public osound::AudioDevice
        {
        public:
            AudioDevice(uint32_t initBufferSize,
                        uint32_t initSampleRate,
                        uint16_t initChannels,
                        const std::function<void(uint32_t frames,
                                                 uint16_t channels,
                                                 uint32_t sampleRate,
                                                 std::vector<float>& samples)>& initDataGetter);
            ~AudioDevice();

            void start() final;
            void stop() final;

            void outputCallback(AudioBufferList* ioData);

        private:
#if TARGET_OS_MAC && !TARGET_OS_IOS && !TARGET_OS_TV
            AudioDeviceID deviceId = 0;
#endif
            AudioComponent audioComponent = nullptr;
            AudioUnit audioUnit = nullptr;

            uint32_t sampleSize = 0;
            std::vector<uint8_t> data;
        };
    }
}

#endif // CAAUDIODEVICE_HPP
