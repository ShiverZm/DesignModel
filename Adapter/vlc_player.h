#ifndef VLC_PLAYER_H
#define VLC_PLAYER_H
#include "advance_media_player.h"
#include <iostream>

class VlcPlayer :public AdvancedMediaPlayer
{
public:
    void playMp4(std::string fileName) override{

    }

    void playVlc(std::string fileName) override{
        std::cout<<"Playing vlc file. Name:"<<fileName<<std::endl;
    }
};

#endif // VLC_PLAYER_H
