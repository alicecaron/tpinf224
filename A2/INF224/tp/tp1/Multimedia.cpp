#include "Multimedia.h"
#include<iostream>

Multimedia::Multimedia(): nom("Filename"), date(0), path("/cal/homes/acaron/inf224/file.txt"){
    //path="/user/acaron/multimedia/file.txt";
}

Multimedia::Multimedia(string _nom,int _date, string _path):nom(_nom),date(_date),path(_path){

}

const string Multimedia::getNom() const {
    return nom;
}

const string Multimedia::getPath() const {
    return path;
}

const int Multimedia::getDate() const  {
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
    cout <<"____________________________________________________________"
        <<endl
        <<nom
        <<" "
        <<date
        <<" "
        <<path
        <<" ";
        //<<endl;
}

Multimedia::~Multimedia(){cout<<"Destruction de l'objet "<<nom<<endl;}

