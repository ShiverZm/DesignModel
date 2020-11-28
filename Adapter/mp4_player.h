#ifndef MP4_PLAYER_H
#define MP4_PLAYER_H
#include "advance_media_player.h"
#include <iostream>

class Mp4Player :public AdvancedMediaPlayer
{
public:
    void playMp4(std::string fileName) override{
        std::cout<<"Playing mp4 file. Name:"<<fileName<<std::endl;
    }

    void playVlc(std::string fileName) override{

    }

};

#endif // MP4_PLAYER_H
