#include"Multimedia.h"
#include"Video.h"
#include"Image.h"
#include"Film.h"
#include<iostream>
using namespace std;

int main(){

    Multimedia* m1 = new Multimedia();
    Multimedia* m2 = new Multimedia("fichier.mp3",0,"/user/acaron/musique");

    Video* v1 = new Video();
    Video* v2 = new Video("fichier.avi",0,"/user/acaron/video",31.6);

    Image* im1 = new Image();
    Image* im2 = new Image("fichier.gif",0,"/user/acaron/image","Paris");

/*
    m1->display();
    m2->display();
    v1->display();
    v2->display();
    im1->display();
    im2->display();
//*/
//*
    Multimedia* tableauDeMultimedias[10];
    unsigned int count = 0;

    tableauDeMultimedias[count++]=v1;
    tableauDeMultimedias[count++]=im1;
    tableauDeMultimedias[count++]=v2;
    tableauDeMultimedias[count++]=im2;

    for(unsigned int i=0;i<count;i++ ){
        tableauDeMultimedias[i]->display();
    }
//*/
    //Un tableau avec les durées de chaque chapitre d'un film
    int chapitresF1[]={10,12,15,9,32};
//*
    Film* film1=new Film("Ratatouille",1564896,"alice/multimedia/films",120);

    film1->display();
    film1->setDureeChapitres(chapitresF1,5);


    cout<<endl<<"Tests avec les pointeurs:"<<endl;
    //renvoie l'adresse vers quoi pointe le tableau (car c'est un pointeur)    film1->getDureeChapitres()
    cout<<film1->getDureeChapitres()<<endl;
    //renvoie la valeur vers quoi pointe    film1->getDureeChapitres()
    cout<<*film1->getDureeChapitres()<<endl;//10
    //idem
    cout<<film1->getDureeChapitres()[0]<<endl;//10
    //renvoie la 2eme valeur vers quoi pointe   film1->getDureeChapitres()
    cout<<film1->getDureeChapitres()[1]<<endl;//12
    film1->display();

    chapitresF1[0]=33333;
    film1->display();
//*/

//*
    delete m1;
    m1 = NULL;
    delete m2;
    m2 = NULL;

    delete v1;
    v1 = NULL;
    delete v2;
    v2 = NULL;

    delete im1;
    im1 = NULL;
    delete im2;
    im2 = NULL;

    delete film1;
    film1 = NULL;



//*/

}
