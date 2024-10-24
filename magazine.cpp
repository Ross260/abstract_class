#include <iostream>
#include "livre.h"
#include "magazine.h"
#include <string>


// Constructeur avec paramètres
magazine::magazine(std::string titre, std::string auteur, int anneePublication, int numeroEdition) : livre(titre, auteur, anneePublication), numeroEdition(numeroEdition) {}

void magazine::afficherInfo() const {

    livre::afficherInfo(); // appel de la fonction afficher info de base

    std::cout <<" Numero d'edition : " << numeroEdition << std::endl;
}

std::string magazine::getType() const {
    std::cout << "Il s'agit d'un Magazine \n" << std::endl;
}

