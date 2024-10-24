#include "livre.h"
#include <iostream>
#include <string>

// Constructeur avec paramètres
livre::livre(std::string titre, std::string auteur, int anneePublication) : titre(titre), auteur(auteur), anneePublication(anneePublication) {}

void livre::afficherInfo() const {
    std::cout << "Information \n titre : "<< titre << "\n Auteur : " << auteur << "\n Annee de publication: "<< anneePublication << std::endl;
}

std::string livre::getType() const {
    std::cout << "Il s'agit d'un Livre" << std::endl;
}

// Destructeur
livre::~livre() {
    std::cout << "Destruction du livre" << std::endl;
}