#include <iostream>
#include <vector>

using namespace std;

void removeFromVector(std::vector<int>& vec, size_t pos);

int main() {
    std::vector<int> monVecteur = {1, 2, 3, 4, 5};

    try {
        removeFromVector(monVecteur, 6); // Supprime l'élément à la position 2

        // Affichage du vecteur après suppression
        for (int val : monVecteur) {
            std::cout << val << " ";
        }
        std::cout << std::endl;
    } catch (const std::exception& e) {
        std::cerr << "Erreur: " << e.what() << std::endl;
    }

    return 0;
}

void removeFromVector(std::vector<int>& vec, size_t pos) {
    if (vec.empty()) {
        throw runtime_error("Le vecteur est vide, suppression impossible");
    }
    if (pos >= vec.size()) {   // petit piège : pos est un indice, vec.size est la taille. Exemple : si vec.size vaut 3, alors les indices vont de 0 à 2. C'est pourquoi il faut mettre pos >= vec.size, pour pas oublier que le troisième élément est à la position 2, la position 3 n'existe pas !
        throw out_of_range("Vous essayez de supprimer une valeur en dehors du vecteur");
    }
    vec.erase(vec.begin()+pos);
}