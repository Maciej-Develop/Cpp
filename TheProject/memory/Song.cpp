//
// Created by macie on 18/03/2025.
//

#include "Song.h"

Song::Song(const std::string &title, const std::string &album, const std::string &artist, float *audioBuffer,
           int audioBufferSize)
    : title(title), album(album), artist(artist), audioBuffer(audioBuffer), audioBufferSize(audioBufferSize) {
}

void Song::setTitle(const std::string &title) {
    this->title = title;
}

const std::string &Song::getTitle() const {
    return this->title;
}

const std::string &Song::getAlbum() const {
    return this->album;
}

const std::string &Song::getArtist() const {
    return this->artist;
}
