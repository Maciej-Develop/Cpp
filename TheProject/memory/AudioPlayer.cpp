//
// Created by macie on 18/03/2025.
//

#include "AudioPlayer.h"

#include <format>
#include <iostream>

AudioPlayer::AudioPlayer(float volume): volume(volume) {}

void AudioPlayer::play(Song *song) {

    applyVolume(song->getAudioBuffer(),song->getAudioBufferSize());

    for (int i = 0; i < song->getAudioBufferSize(); i++) {
        std::cout << std::format("{:6.4f}", song->getAudioBuffer()[i]) << std::endl;
    }
}


void AudioPlayer::applyVolume(float *samples, int bufferSize) {

    float* curr = samples;
    float* end = samples + bufferSize;

    while (curr < end) {
        *curr = std::max(-1.0f, std::min(1.0f, *curr*volume));
        ++curr;
    }
}

