#ifndef DRIVER_HPP
#define DRIVER_HPP

namespace osound
{
    enum class Driver
    {
        Empty,
        OpenAL,
        DirectSound,
        XAudio2,
        OpenSL,
        CoreAudio,
        ALSA,
        WASAPI
    };
}

#endif // DRIVER_HPP
