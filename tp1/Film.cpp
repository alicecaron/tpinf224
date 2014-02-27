#include "Film.h"
#include<iostream>
#include<string.h>  //strcat
#include<stdlib.h>  //system
using namespace std;

Film::Film():Video(){
    chapitres=NULL;
    nbChapitres=0;
}

Film::Film(string _nom,int _date,string _path,float _duree):
    Video(_nom,_date,_path,_duree){
    chapitres=NULL;
    nbChapitres=0;
}

const int* Film::getChapitres() const{
    return chapitres;
}

void Film::setChapitres(const int _chapitres[],unsigned int _nbChapitres){
    delete chapitres;
    nbChapitres=_nbChapitres;
    chapitres = new int[nbChapitres];
    for(unsigned int i=0;i<nbChapitres;i++){
        chapitres[i]=_chapitres[i];
    }
}

void Film::display() const{
    Video::display();
    for(unsigned int i=0;i<nbChapitres;i++){
        cout << chapitres[i]<<" ";
    }
    cout<<endl;
}

//cette fonction est définie dans la Classe Video, que Film hérite justement, on ne la redéfinit pas ici.
/*
void Film::play()const{
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
//*/


Film::~Film(){delete chapitres;}
