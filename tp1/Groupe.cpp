#include "Groupe.h"

Groupe::Groupe():nomGroupe("Mon groupe"){}

Groupe::Groupe(string _nomGroupe):nomGroupe(_nomGroupe){

}

const string Groupe::getNomGroupe() const{
    return nomGroupe;
}

const void Groupe::display() const{
    cout<<nomGroupe<<endl;
}

Groupe::~Groupe(){}
