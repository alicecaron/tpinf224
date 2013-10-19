#include "Multimedia.h"
#include<iostream>

Multimedia::Multimedia(){
    nom="Filename";
    date=0;
    path="/user/acaron/multimedia/file.ext";
}

Multimedia::Multimedia(string _nom,int _date, string _path):nom(_nom),date(_date),path(_path){}

string Multimedia::getNom() const {
    return nom;
}

string Multimedia::getPath() const {
    return path;
}

int Multimedia::getDate() const  {
    return date;
}

void Multimedia::setNom(string _nom) {
    nom=_nom;
}

void Multimedia::setDate(int _date) {
    date=_date;
}

void Multimedia::setPath(string _path) {
    path=_path;
}

void Multimedia::display() const {
    cout <<"================================================"<<endl
        <<nom<<" "<<date<<" "<<path<<endl;
}


Multimedia::~Multimedia(){}

