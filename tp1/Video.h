#ifndef VIDEO_H
#define VIDEO_H
#include "Multimedia.h"

class Video : public Multimedia
{
private:
    float duree;
public:
    Video();
    Video(string _nom,int _date, string _path,float _duree);
    /**
     * @brief getDuree
     * @return
     * Récupérer la durée de la vidéo
     */
    virtual float getDuree() const;
    /**
     * @brief setDuree
     * @param _duree
     * Changer la valeur de la durée de la vidéo
     */
    virtual void setDuree(float _duree);
    virtual void display() const;
    virtual void play()const;
    virtual ~Video();
};

#endif // VIDEO_H
