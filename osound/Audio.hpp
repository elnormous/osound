#ifndef OSOUND_AUDIO_HPP
#define OSOUND_AUDIO_HPP

#include <memory>

namespace osound
{
    class AudioDevice;

    class Audio
    {
    public:
        Audio();

    private:
        std::unique_ptr<AudioDevice> audioDevice;
    };
}

#endif // OSOUND_AUDIO_HPP
