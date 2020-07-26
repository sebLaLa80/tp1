#ifndef EMPLOYE_H
#define EMPLOYE_H
#include <iostream>
#include <string>

class Employe
{
protected:
    std::string nom;
    int matricule;

public:
    Employe(std::string nom, int matricule)
    {
        this->nom = nom;
        this->matricule = matricule;
    }
    virtual ~Employe()
    {
    }
    std::string getNom()
    {
        return nom;
    }
    int getMatricule()
    {
        return matricule;
    }
    virtual double calculerSalaire() = 0;
};

#endif // EMPLOYE_H
