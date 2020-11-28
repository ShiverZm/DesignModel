#ifndef AUDIO_PLAYER_H
#define AUDIO_PLAYER_H
#include "media_player.h"
#include "media_adapter.h"
#include "mp4_player.h"

class AudioPlayer :public MediaPlayer
{
private:
    MediaAdapter* mediaAdapterPtr;
public:
    void play(std::string audioType, std::string fileName) override{
        if(audioType == "vlc" || audioType == "mp4"){
            mediaAdapterPtr = new MediaAdapter(audioType);
            mediaAdapterPtr->play(audioType,fileName);
        }else if (audioType == "mp3"){
            std::cout<<"Playing mp3 file. Name: "<<fileName<<std::endl;
        }else{
           std::cout<<"invalid "<<std::endl;
        }
    }
};

#endif // AUDIO_PLAYER_H
