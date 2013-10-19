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
string Image::getLieu() const{
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
    string path=Multimedia::getPath().c_str();
    int length = path.length();
    char command[length+10];
    strcpy (command,"display ");
    strcat (command,path.c_str());
    strcat (command," &");

    cout <<command;
    cout<<endl;
    system(command);
}

Image::~Image(){}
