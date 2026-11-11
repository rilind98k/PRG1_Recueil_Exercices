#include <cstdlib>
#include <iostream>
#include <limits>       // Besoin d'introduire la bibliothèque limits
#include <stdexcept>
#include <string>

using namespace std;
using ull = unsigned long long ; // Permet de créer un alias pour faciliser l'ecriture

int sommeNPremiersEntiers(int n);
void test(int n);

int main() {

    test(-1);
    test(0);
    test(1);
    test(65535);
    test(65536);

    return EXIT_SUCCESS;
}

void test(int n) {
    cout << "sommeNPremiersEntiers(" << to_string(n) << ")";
    try {
        cout << " = " << sommeNPremiersEntiers(n) << endl;
    } catch (const exception& e) {
        cout << ": " << e.what() << endl;
    }
}

int sommeNPremiersEntiers(int n) {
    if (n < 0) {        // Premier cas d'erreur : si n est passé en négatif
        throw invalid_argument("Argument invalide : n doit etre superieur à 0"); //invalid_argument ici
    }
   ull somme = (ull) n * ((ull) n + 1)/2; // donc ull car le calcul va provoquer un dépassement avec 65535, on prend  de la marge

    if (somme > numeric_limits<int>::max()) {  // Vue qu'on return un int, c'est ça qu'on va vérifier si cela overflow.
    throw overflow_error("Un debordement est survenu dans les calculs");
    }
    return (int) somme;
}