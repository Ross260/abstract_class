#ifndef LIVRE_H
#define LIVRE_H

#include <string>

class livre {
    protected:
        std::string titre;
        std::string auteur;
        int anneePublication;

    public:
        livre(); // constructeur pas défaut

        livre(std::string titre, std::string auteur, int anneePublication);

        // une methode virtuelle pure
        virtual void afficherInfo() const = 0;

        // methode virtuelle pure qui retourne le type du livre
        virtual std::string getType() const = 0;

        // Destructeur
        virtual ~livre();
};


#endif
