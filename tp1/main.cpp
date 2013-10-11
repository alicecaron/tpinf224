#include"Multimedia.h"
#include"Video.h"
#include"Image.h"


int main(){

    Multimedia* m1 = new Multimedia();
    Multimedia* m2 = new Multimedia("fichier.mp3",0,"/user/acaron/musique");

    Video* v1 = new Video();
    Video* v2 = new Video("fichier.avi",0,"/user/acaron/video",31.6);

    Image* im1 = new Image();
    Image* im2 = new Image("fichier.gif",0,"/user/acaron/image","Paris");

//*
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

//*/

}
