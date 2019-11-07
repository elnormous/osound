#ifndef AUDIODEVICE_HPP
#define AUDIODEVICE_HPP

#include "Driver.hpp"

namespace osound
{
    class AudioDevice
    {
    public:
        AudioDevice(Driver initDriver);
        virtual ~AudioDevice() = default;

    private:
        Driver driver;
    };
}

#endif // AUDIODEVICE_HPP
