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

const void Groupe::display() {
    cout<<endl<<endl
        <<"*******Liste des Multimedias dans le groupe: "
        <<nomGroupe
        <<"*******"
        <<endl;

    for (list<intrusive_ptr<Multimedia> >::const_iterator iter = this->lst.begin();iter!=this->lst.end();++iter)
        (*iter)->display();
}

const std::list<intrusive_ptr<Multimedia> > Groupe::getList() const{
    return lst;
}
std::list<intrusive_ptr<Multimedia> > Groupe::ggetList(){
    return lst;
}

void Groupe::addList(intrusive_ptr<Multimedia> multimedia){
    if(multimedia!=NULL)
        lst.push_back(multimedia);
}

void Groupe::removeFromList(intrusive_ptr<Multimedia> multimedia){
    lst.remove(multimedia);
}

Groupe::~Groupe(){cout<<"Destruction du groupe "<<nomGroupe<<endl;}
