#ifndef AUDIO_HPP
#define AUDIO_HPP

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

#endif // AUDIO_HPP
