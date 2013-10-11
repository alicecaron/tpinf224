#include "Film.h"
#include<iostream>
using namespace std;

Film::Film():Video(){
    dureeChapitres=NULL;
    nbChapitres=0;
}

Film::Film(string _nom,int _date,string _path,float _duree):
    Video(_nom,_date,_path,_duree){
    nbChapitres=0;
}

int Film::getDureeChapitres() const{
    return dureeChapitres;
}

void Film::setDureeChapitres(int _dureeChapitres,unsigned int _nbChapitres){
    dureeChapitres=_dureeChapitres;
    nbChapitres=_nbChapitres;
}

void Film::display() const{
    Video::display();
    for(unsigned int i=0;i<nbChapitres;i++){
        cout << dureeChapitres[i]<<" ";
    }

}

Film::~Film(){}
