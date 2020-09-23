#ifndef AUDIODEVICE_HPP
#define AUDIODEVICE_HPP

#include <cstdint>
#include <functional>
#include <vector>
#include "Driver.hpp"
#include "SampleFormat.hpp"

namespace osound
{
    class AudioDevice
    {
    public:
        AudioDevice(Driver initDriver,
                    uint32_t initBufferSize,
                    uint32_t initSampleRate,
                    uint16_t initChannels, // zero for maximum available channels
                    const std::function<void(uint32_t frames,
                                             uint16_t channels,
                                             uint32_t sampleRate,
                                             std::vector<float>& samples)>& initDataGetter);
        virtual ~AudioDevice() = default;

        virtual void start() = 0;
        virtual void stop() = 0;

    protected:
        void getData(uint32_t frames, std::vector<uint8_t>& result);

        Driver driver;

        SampleFormat sampleFormat = SampleFormat::signedInt16;
        uint32_t bufferSize; // in frames
        uint32_t sampleRate;
        uint16_t channels;

    private:
        std::function<void(uint32_t frames, uint16_t channels, uint32_t sampleRate, std::vector<float>& samples)> dataGetter;
        std::vector<float> buffer;
    };
}

#endif // AUDIODEVICE_HPP
