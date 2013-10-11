#ifndef MULTIMEDIA_H
#define MULTIMEDIA_H
#include<string>
using namespace std;

class Multimedia
{

private:
    string nom;
    int date;
    string path;

public:
    /**
     * Constructeur de Multimedia par défaut
     */
    Multimedia();
    /**
     * Constructeur de Multimedia avec 3 paramètres
     */
    Multimedia(string _nom,int _date, string _path);
    /**
     * Récupérer le nom du fichier multimédia
     */
    virtual string getNom() const;
    /**
     * Récupérer le chemin du fichier multimédia
     */
    virtual string getPath() const;
    /**
     * Récupérer la date du fichier multimédia
     */
    virtual int getDate() const;
    /**
     * Modifier le nom du fichier multimédia
     */
    virtual void setNom(string _nom);
    /**
     * Modifier la date du fichier multimédia
     */
    virtual void setDate(int _date);
    /**
     * Modifier le chemin du fichier multimédia
     */
    virtual void setPath(string _path);
    /**
     * Afficher les variables de classe de l'objet Multimédia
     */
    virtual void display() const;
    /**
     * Destructeur de l'objet Multimédia
     */
    virtual ~Multimedia();

};

#endif // MULTIMEDIA_H
