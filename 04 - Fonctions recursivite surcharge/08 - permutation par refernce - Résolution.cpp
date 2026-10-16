#include <cstdlib>
#include <iostream>

using namespace std;

void permutationCiculaireDroite(double& a, double& b, double& c);

void afficher(double a, double b, double c);

int main() {
    double x = 1, y = 2, z = 3;

    for (int i = 1; i <= 3; ++i) {
        permutationCiculaireDroite(x, y, z);
        afficher(x, y, z);
    }
    return EXIT_SUCCESS;
}

void permutationCiculaireDroite(double& x, double& y, double& z) {
    double temporaire = z;
    z = y;
    y = x;
    x = temporaire;
}

void afficher(double x, double y, double z) {
    cout << "x = " << x << ", "
         << "y = " << y << ", "
         << "z = " << z << endl;
}