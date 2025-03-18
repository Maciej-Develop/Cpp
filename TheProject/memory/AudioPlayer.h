//
// Created by macie on 18/03/2025.
//

#ifndef AUDIOPLAYER_H
#define AUDIOPLAYER_H
#include "Song.h"

//class Song;

class AudioPlayer {

    float volume = 1.0f;
    void applyVolume(float* samples, int bufferSize);

public:

    AudioPlayer(float volume);

    void play(Song * song);

};

#endif //AUDIOPLAYER_H
