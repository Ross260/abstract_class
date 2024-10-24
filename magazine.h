#ifndef MAGAZINE_H
#define MAGAZINE_H

#include <string>
#include "livre.h"

class magazine : public livre{

    private:
        int numeroEdition;
    
    public:
        magazine();

        magazine(std::string titre, std::string auteur, int anneePublication, int numeroEdition);

        void afficherInfo() const override;

        std::string getType() const override;
};



#endif