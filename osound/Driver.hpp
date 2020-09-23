#ifndef DRIVER_HPP
#define DRIVER_HPP

namespace osound
{
    enum class Driver
    {
        none,
        openAL,
        directSound,
        xAudio2,
        openSL,
        coreAudio,
        alsa,
        wasapi
    };
}

#endif // DRIVER_HPP
