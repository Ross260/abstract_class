#include <iostream>
#include "livre.h"
#include "article.h"

#include <string>

//article builder with parameters
article::article(std::string titre, std::string auteur, int anneePublication, std::string journal, int volume) : livre(titre, auteur, anneePublication), journal(journal), volume(volume) {}

void article::afficherInfo() const {

    livre::afficherInfo(); // appel de la fonction afficher info de base

    std::cout <<" Nom du Journal : " << journal << "\n Volume : " << volume << std::endl;
}

std::string article::getType() const {
    std::cout << "Il s'agit d'un Article  \n" << std::endl;
}