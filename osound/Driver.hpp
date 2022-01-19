#ifndef OSOUND_DRIVER_HPP
#define OSOUND_DRIVER_HPP

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

#endif // OSOUND_DRIVER_HPP
