#ifndef DRIVER_HPP
#define DRIVER_HPP

namespace osound
{
    enum class Driver
    {
        none,
        openAl,
        directSound,
        xAudio2,
        openSl,
        coreAudio,
        alsa,
        wasapi
    };
}

#endif // DRIVER_HPP
