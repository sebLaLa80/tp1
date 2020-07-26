#ifndef EMPLOYESYNDIQUE_H
#define EMPLOYESYNDIQUE_H
#include "employe.h"

class EmployeSyndique : public Employe
{
private:
    double salaireHoraire;
    double heuresTravaillees;

public:
    EmployeSyndique(std::string nom, int matricule, double salaireHoraire, double heuresTravaillees);
    ~EmployeSyndique();
    double calculerSalaire();
};

#endif // EMPLOYESYNDIQUE_H
