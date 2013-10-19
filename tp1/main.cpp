#include"Multimedia.h"
#include"Video.h"
#include"Image.h"
#include"Film.h"
#include<iostream>
using namespace std;

int main(){

    //il n'est plu possible de créer m1 et m2 puisque Multimédia est devenue une classe abstraite à partir de la question8
    //Multimedia* m1 = new Multimedia();
    //Multimedia* m2 = new Multimedia("fichier.mp3",0,"/user/acaron/musique");

    Video* v1 = new Video();
    Video* v2 = new Video("Boule et Bill",0,"/home/alice/TPT/A2/INF224/tp/nrd-mouleetbill.mkv",31.6);

    Image* im1 = new Image();
    Image* im2 = new Image("Linux pingouin",0,"/home/alice/TPT/A2/INF224/tp/linux.jpg","Paris");

/*
    m1->display();
    m2->display();
    v1->display();
    v2->display();
    im1->display();
    im2->display();
//*/
/*
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
    int chapitresF12[]={9,45,55,2,77,98,44,2};
    int chapitresF13[]={2,4,8,10};


//*
    Film* film1=new Film("Ratatouille",1564896,"/home/alice/TPT/A2/INF224/tp/nrd-mouleetbill.mkv",120);
    Film* film2=new Film("Madagascar",2645896,"/home/alice/TPT/A2/INF224/tp/nrd-mouleetbill.mkv2",150);
    Film* film3=new Film("Bolt",324564896,"/home/alice/TPT/A2/INF224/tp/nrd-mouleetbill.mkv",180);

    film1->display();
    film1->setChapitres(chapitresF1,5);
    film1->display();

    film1->setChapitres(chapitresF12,8);
    film1->display();

    film1->setChapitres(chapitresF13,4);
    film1->display();

    film2->setChapitres(chapitresF1,5);
    film3->setChapitres(chapitresF12,8);


/*
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
//*/



    film1->display();
    film2->display();
    film3->display();

    //film1->play();
    //film2->play();
    film3->play();
    im2->play();
    //v2->play();


//*/

/*
    delete m1;
    m1 = NULL;
    delete m2;
    m2 = NULL;
//*/
//*
    delete v1;
    v1 = NULL;
    delete v2;
    v2 = NULL;

    delete im1;
    im1 = NULL;
    delete im2;
    im2 = NULL;

/*
    const int *p=film1->getChapitres();
    cout<<"pointeur: "<<p;
    delete p;//va effacer tous les chapitres sans que l'objet soit au courant!
//*/

    delete film1;
    film1 = NULL;
    delete film2;
    film1 = NULL;
    delete film3;
    film1 = NULL;


//*/

}
