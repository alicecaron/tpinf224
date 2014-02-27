#ifndef IMAGE_H
#define IMAGE_H
#include"Multimedia.h"

class Image : public Multimedia
{
private:
    /**
     * Lieu de la photo
     */
    string lieu;
public:
    Image();
    Image(string _nom,int _date,string _path,string _lieu);
    /**
     * Récupération du lieu de la photo
     */
    const virtual string getLieu() const;
    /**
     * @brief setLieu
     * @param _lieu
     * Changer le lieu de la photo
     */
    virtual void setLieu(string _lieu);
    virtual void display() const;
    virtual void play()const;
    virtual ~Image();
};

#endif // IMAGE_H
