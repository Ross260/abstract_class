#include <iostream>
#include "livre.h"
#include "roman.h"
#include "article.h"
#include "magazine.h"


int main()
{
    std::cout << "=== Creation des objets ===" << std::endl;

    roman roman1("Zootopia", "Pabe mongo", 2000, 12);
    roman1.afficherInfo();
    roman1.getType();

    article article1("Nganou champion","yoyo",2024,"journal de 20h", 10);
    article1.afficherInfo();
    article1.getType();

    magazine magazine1("Lapamba", "Susongo", 2008, 120);
    magazine1.afficherInfo();
    magazine1.getType();

    //stoquage des information de manière dynamique
    std::cout << "\n=== Creation dynamique des objets === \n" << std::endl;

    livre* livre1 = new roman("Le Petit Prince", "Antoine de Saint-Exupery", 1943, 58);
    livre* livre2 = new article("Champion","Yoyo",1970," Le 20h", 10);
    livre* livre3 = new magazine("Lapamba", "Susongo", 2008, 120);

    livre1->afficherInfo();
    livre2->afficherInfo();
    livre3->afficherInfo();

    // liberation de la memoire de maniere dynamique 
    delete livre1;
    delete livre2;
    delete livre3;


    return 0;
}
