#ifndef OSOUND_AUDIO_HPP
#define OSOUND_AUDIO_HPP

#include <memory>
#include "AudioDevice.hpp"

namespace osound
{
    class Audio
    {
    public:
        Audio();

    private:
        std::unique_ptr<AudioDevice> audioDevice;
    };
}

#endif // OSOUND_AUDIO_HPP
