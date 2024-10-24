#ifndef ARTICLE_H
#define ARTICLE_H

#include <string>
#include "livre.h"

class article : public livre{

    private:
        std::string journal;
        int volume;
    
    public:
        article();

        article(std::string titre, std::string auteur, int anneePublication,std::string journal, int volume);

        void afficherInfo() const override;

        std::string getType() const override;
};



#endif