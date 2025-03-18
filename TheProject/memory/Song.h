//
// Created by macie on 18/03/2025.
//

#ifndef SONG_H
#define SONG_H
#include <string>

class Song {

    std::string title;
    std::string album;
    std::string artist;

public:

    Song(const std::string& title, const std::string& album, const std::string& artist);

    const std::string& getTitle() const;

    const std::string& getAlbum() const;

    const std::string& getArtist() const;


    void setTitle(const std::string &title);
};

#endif //SONG_H
