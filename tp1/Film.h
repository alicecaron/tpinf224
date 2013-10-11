#ifndef FILM_H
#define FILM_H
#include "Video.h"


class Film: public Video
{

private:
    int* dureeChapitres;
    unsigned int nbChapitres;
    int adresse;
public:
    Film();
    Film(string _nom,int _date,string _path,float _duree);
    virtual int* getDureeChapitres() const;
    virtual void setDureeChapitres(int _dureeChapitres[],unsigned int _nbChapitres);
    virtual void display() const;
    virtual ~Film();
};

#endif // FILM_H
