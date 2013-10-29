#include "Groupe.h"

Groupe::Groupe():nomGroupe("Mon groupe"){}

Groupe::Groupe(string _nomGroupe):nomGroupe(_nomGroupe){

}

const string Groupe::getNomGroupe() const{
    return nomGroupe;
}
void Groupe::setNomGroupe(string _nomGroupe){
    nomGroupe=_nomGroupe;
}

const void Groupe::display() const{
    for (list<Multimedia*>::const_iterator iter = this->lst.begin();iter!=this->lst.end();++iter)
        cout<<(*iter).getNom()<<endl;
}

const std::list<Multimedia*> Groupe::getList() const{
    return lst;
}

void Groupe::addList(Multimedia* multimedia){
    lst.push_back(multimedia);
}

Groupe::~Groupe(){}
