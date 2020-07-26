#include "employe.h"
#include "employesyndique.h"
#include <iostream>


int main()
{
    Employe* nos_employes[250];
    int nbrEmployesCrees = 0;
    int choix = 0;

    do {
        std::string nom;
        int matricule;
        std::cout << "\t\t--= MENU =--"
                  << "\n\n\t1.Ajouter employe syndique"
                  << "\n\t2.Ajouter employe contractuel"
                  << "\n\t3.Ajouter employe ponctuel"
                  << "\n\t4.Afficher le resultat de paie pour les employes entrees"
                  << "\n\t5.Quitter" << std::endl;
        std::cin >> choix;
        switch(choix) {
        case 1:
            double salaireHoraire;
            double heuresTravaillees;
            std::cout << "Entrez le nom de l'employe : " << std::endl;
            std::cin >> nom;
            std::cout << "Entrez le numero de matricule de l'employe : " << std::endl;
            std::cin >> matricule;
            std::cout << "Entrez le salaire horaire de l'employe : " << std::endl;
            std::cin >> salaireHoraire;
            std::cout << "Entrez les heures travaillees de l'employe : " << std::endl;
            std::cin >> heuresTravaillees;
            nos_employes[nbrEmployesCrees] = new EmployeSyndique(nom, matricule, salaireHoraire, heuresTravaillees);
            nbrEmployesCrees++;
            break;
        case 2:
            break;
        case 3:
            break;
        case 4:
            double totalVerse;
            for(int i = 0; i < nbrEmployesCrees; i++) {
                double paieBrute = nos_employes[i]->calculerSalaire();
                std::cout << nos_employes[i]->getNom() << " " << nos_employes[i]->getMatricule()
                  << "\n Paie brute de " << paieBrute << " $"
                  << "\n Impots CA de " << paieBrute*0.15 << " $"
                  << "\n Impots QC de " << paieBrute*0.15 << " $"
                  << "\n Paie nette de " << paieBrute-(paieBrute*0.3) << " $" << std::endl;
                  totalVerse += paieBrute;
            }
            std::cout << "\nTotaux"
            << "\n Montants totaux verses de " << totalVerse << " $"
            << "\n Impots a transferer CA de " << totalVerse*0.15 << " $"
            << "\n Impots a transferer QC de " << totalVerse*0.15 << " $" << std::endl;
            break;
        }
    } while(choix != 5);

    for(int i = 0; i < nbrEmployesCrees; i++) {
        delete nos_employes[i];
    }

    return 0;
}
