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

    return 0;
}
