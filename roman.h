#ifndef ROMAN_H
#define ROMAN_H

#include <string>
#include "livre.h"

class roman : public livre {
    private:
        int nbrePages;


    public:
        //constructeur par défaut
        roman();

        // Constructeur avec paramètres
        roman(std::string titre, std::string auteur, int anneePublication, int nbrePages);

        void afficherInfo() const override;

        std::string getType() const override;

        // Destructeur
        //  ~roman() override;  // pas la peine de le redéclarer car le destructeur de la classe de base sera automatiquement appelé
};

#endif