#ifndef GROUPE_H
#define GROUPE_H
#include<string>
#include<iostream>
using namespace std;

class Groupe
{
private:
    string nomGroupe;
    //template < class T, class Alloc = allocator<T> > class list;
public:
    Groupe();
    Groupe(string _nomGroupe);
    const string virtual getNomGroupe() const;
    const void virtual display() const;
    virtual ~Groupe();
};

#endif // GROUPE_H
