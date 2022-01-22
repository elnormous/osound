#ifndef OSOUND_AUDIO_HPP
#define OSOUND_AUDIO_HPP

#include <memory>
#include "AudioDevice.hpp"
#include "mixer/Mixer.hpp"

namespace osound
{
    class Audio
    {
    public:
        Audio();

    private:
        std::unique_ptr<AudioDevice> audioDevice;
        mixer::Mixer mixer;
    };
}

#endif // OSOUND_AUDIO_HPP
