#include "Video.h"
#include "Multimedia.h"
#include<iostream>
using namespace std;



Video::Video():
    Multimedia(){
    duree=0.0;
}
Video::Video(string _nom,int _date, string _path,float _duree):
    Multimedia(_nom,_date,_path){
    duree=_duree;
}

float Video::getDuree() const{
    return duree;
}

void Video::setDuree(float _duree){
    duree=_duree;
}

void Video::display() const{
    Video::display();
    cout<<"Duree: "<<duree<<endl;
}

Video::~Video(){}
