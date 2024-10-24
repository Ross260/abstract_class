#include <iostream>
#include "livre.h"
#include "roman.h"
#include <string>


// Constructeur avec paramètres
roman::roman(std::string titre, std::string auteur, int anneePublication, int nbrePages) : livre(titre, auteur, anneePublication), nbrePages(nbrePages) {}

void roman::afficherInfo() const {

    livre::afficherInfo(); // appel de la fonction afficher info de base

    std::cout <<" Nombre de page : " << nbrePages << std::endl;
}

std::string roman::getType() const {
    std::cout << "Il s'agit d'un Roman \n" << std::endl;
}

// Destructeur : pas la peine de le redéclarer
// roman::~roman() {
//     std::cout << "Destruction du roman" << std::endl;
// }
