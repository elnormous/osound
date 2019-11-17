#include "AudioDevice.hpp"

namespace osound
{
    AudioDevice::AudioDevice(Driver initDriver,
                             uint32_t initBufferSize,
                             uint32_t initSampleRate,
                             uint16_t initChannels,
                             const std::function<void(uint32_t frames,
                                                      uint16_t channels,
                                                      uint32_t sampleRate,
                                                      std::vector<float>& samples)>& initDataGetter):
        driver(initDriver),
        bufferSize(initBufferSize),
        sampleRate(initSampleRate),
        channels((initChannels != 0) ? initChannels : 2), // TODO: leave it zero and let subclasses decide the number of channels
        dataGetter(initDataGetter)
    {
    }
}
