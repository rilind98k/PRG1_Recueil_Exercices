#include <cstdlib>
#include <iostream>

using namespace std;

// 1. PROTOTYPE : On remplace les références (&) par des pointeurs (*)
void permutationCiculaireDroite(double* a, double* b, double* c);

void afficher(double a, double b, double c);

int main() {
    double x = 1, y = 2, z = 3;

    for (int i = 1; i <= 3; ++i) {
        // 2. APPEL : On doit envoyer explicitement l'adresse de chaque variable avec '&'
        permutationCiculaireDroite(&x, &y, &z);
        afficher(x, y, z);
    }
    return EXIT_SUCCESS;
}

// 3. DÉFINITION : On utilise '*' devant les variables pour modifier la valeur au bout de l'adresse
void permutationCiculaireDroite(double* x, double* y, double* z) {
    double temporaire = *z;    // On stocke la VALEUR pointée par z (un vrai double, donc pas d'étoile sur 'temporaire')
    *z = *y;                   // La case pointée par z prend la valeur de la case pointée par y
    *y = *x;                   // La case pointée par y prend la valeur de la case pointée par x
    *x = temporaire;           // La case pointée par x prend la valeur sauvegardée
}

void afficher(double x, double y, double z) {
    cout << "x = " << x << ", "
         << "y = " << y << ", "
         << "z = " << z << endl;
}
