#ifndef GROUPE_H
#define GROUPE_H
#include<string>
#include<iostream>
#include<list>
#include"Multimedia.h"


using namespace std;

class Groupe: public Pointable
{
private:
    list<intrusive_ptr<Multimedia> > lst;
    string nomGroupe;
public:
    Groupe();
    Groupe(string _nomGroupe);
    virtual const string getNomGroupe() const;
    virtual void setNomGroupe(string _nomGroupe);
    virtual const void display() ;
    virtual const std::list<intrusive_ptr<Multimedia> > getList() const;
    virtual void addList(intrusive_ptr<Multimedia>);
    virtual void removeFromList(intrusive_ptr<Multimedia>);
    virtual ~Groupe();

    virtual std::list<intrusive_ptr<Multimedia> > ggetList();
};

#endif // GROUPE_H
