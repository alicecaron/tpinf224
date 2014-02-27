#ifndef FILM_H
#define FILM_H
#include "Video.h"


class Film: public Video
{

private:
    int* chapitres;
    unsigned int nbChapitres;
public:
    Film();
    Film(string _nom,int _date,string _path,float _duree);
    virtual const int* getChapitres() const;
    virtual void setChapitres(const int _chapitres[],unsigned int _nbChapitres);
    virtual void display() const;
    //virtual void play()const;
    virtual ~Film();
};

#endif // FILM_H
