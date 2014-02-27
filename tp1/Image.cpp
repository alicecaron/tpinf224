#include "Image.h"
#include "Multimedia.h"
#include<iostream>
#include<string.h>
#include<stdlib.h>
using namespace std;

Image::Image():
    Multimedia(){
    lieu="Somewhere";
}

Image::Image(string _nom,int _date,string _path,string _lieu):
    Multimedia(_nom,_date,_path){
    lieu=_lieu;
}
const string Image::getLieu() const{
    return lieu;
}

void Image::setLieu(string _lieu){
    lieu=_lieu;
}

void Image::display() const {
    Multimedia::display();
    cout<<"Lieu: "<<lieu<<endl;
}
void Image::play()const{
    string command="display "+Multimedia::getPath()+" &";
    //cout <<command<<endl;
    system(command.c_str());
}

Image::~Image(){}
