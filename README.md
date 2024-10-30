
# Classe abstraite : Modélisation de Livres en C++

Ce projet consiste à créer une hiérarchie de classes en C++ pour modéliser différents types de livres : Romans, Articles et Magazines. La classe de base sera abstraite et définira les attributs et méthodes communs, tandis que les classes dérivées auront leurs propres spécificités.


---
## Énoncé du Projet

Créer une hiérarchie de classes en C++ :
- **Classe de base** : `Livre` (abstraite)
- **Classes dérivées** :
  - `Roman`
  - `Article`
  - `Magazine`

### Spécifications

1. **Classe abstraite Livre** :
   - **Attributs** :
     - `titre` (string)
     - `auteur` (string)
     - `anneePublication` (int)
   - **Méthodes** :
     - Constructeur avec paramètres pour le titre, l'auteur et l'année de publication.
     - Méthode virtuelle pure `void afficherInfo() = 0;`
     - Méthode virtuelle pure `std::string getType() = 0;`

2. **Classe dérivée Roman** :
   - **Attributs supplémentaires** :
     - `nbPages` (int)
   - **Méthodes** :
     - Constructeur avec paramètres.
     - Redéfinition de `afficherInfo()`.
     - Redéfinition de `getType()`.

3. **Classe dérivée Article** :
   - **Attributs supplémentaires** :
     - `journal` (string)
     - `volume` (int)
   - **Méthodes** :
     - Constructeur avec paramètres.
     - Redéfinition de `afficherInfo()`.
     - Redéfinition de `getType()`.

4. **Classe dérivée Magazine** :
   - **Attributs supplémentaires** :
     - `numeroEdition` (int)
   - **Méthodes** :
     - Constructeur avec paramètres.
     - Redéfinition de `afficherInfo()`.
     - Redéfinition de `getType()`.
