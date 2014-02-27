#ifndef GROUPE_H
#define GROUPE_H
#include<string>
#include<iostream>
#include<list>
#include"Multimedia.h"

using namespace std;

class Groupe
{
private:
//   template < class T, class Alloc = allocator<T> > class list;
    std::list<Multimedia*> lst;

    string nomGroupe;
public:
    Groupe();
    Groupe(string _nomGroupe);
    virtual const string getNomGroupe() const;
    virtual void setNomGroupe(string _nomGroupe);
    virtual const void display() const;
    virtual const std::list<Multimedia*> getList() const;
    virtual void addList(Multimedia*);
    virtual ~Groupe();
};

#endif // GROUPE_H
