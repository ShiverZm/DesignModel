#ifndef MEDIA_ADAPTER_H
#define MEDIA_ADAPTER_H
#include "advance_media_player.h"
#include "media_player.h"
#include "vlc_player.h"
#include "mp4_player.h"

class MediaAdapter :public MediaPlayer
{
private:
    AdvancedMediaPlayer* advancedMusicPlayerPtr;
public:
    MediaAdapter(std::string audioType){
        if(audioType == ("vlc") ){
            advancedMusicPlayerPtr = new VlcPlayer;
        }else if (audioType == "mp4"){
            advancedMusicPlayerPtr = new Mp4Player;
        }
    }


    void play(std::string audioType, std::string fileName) override{
        if(audioType == ("vlc") ){
            advancedMusicPlayerPtr->playVlc(fileName);
        }else if (audioType == "mp4"){
            advancedMusicPlayerPtr->playMp4(fileName);
        }
    }
};

#endif // MEDIA_ADAPTER_H
