#include "employesyndique.h"

EmployeSyndique::EmployeSyndique(std::string nom, int matricule, double salaireHoraire, double heuresTravaillees) : Employe(nom, matricule)
{
    this->salaireHoraire = salaireHoraire;
    this->heuresTravaillees = heuresTravaillees;
}

double EmployeSyndique::calculerSalaire()
{
    return salaireHoraire * heuresTravaillees;
}

EmployeSyndique::~EmployeSyndique()
{
}
