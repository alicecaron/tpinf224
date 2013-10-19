#include "Video.h"
#include "Multimedia.h"
#include<iostream>
#include<string.h>
#include<stdlib.h>
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
    Multimedia::display();
    cout<<"Duree: "<<duree<<endl;
}

void Video::play() const{
    string path=Multimedia::getPath().c_str();
    int length = path.length();
    char command[length+6];
    strcpy (command,"vlc ");
    strcat (command,path.c_str());
    strcat (command," &");

    cout <<command;
    cout<<endl;
    system(command);
}

Video::~Video(){}
