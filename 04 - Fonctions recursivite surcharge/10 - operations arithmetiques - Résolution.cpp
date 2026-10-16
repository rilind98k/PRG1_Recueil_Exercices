#include <iostream>
#include <cstdlib>

using namespace std;

bool operationArithmetique(double a, double b, char c, double& resultat) {
    switch (c) {
        case '+': resultat = a + b; return true;
        case '-': resultat = a - b; return true;
        case '*': resultat = a * b; return true;
        case '/': resultat = a / b; return true;
        default : return false;
    }
}

void afficher(double a, double b, char c) {
    double res;

    if (operationArithmetique(a, b, c, res)) {
        cout << a << " "  << c << " " << b << " " << "= " << res << endl;
    } else {
        cout << "L'operation '" << c << "' est illicite" << endl;
    }
}

int main() {

    double entree1, entree2;

    cout << "Entrez le premier nombre :" << endl;
    cin >> entree1;
    cout << "Entrez le deuxième nombre :" << endl;
    cin >> entree2;

    afficher(entree1, entree2, '+');
    afficher(entree1, entree2, '-');
    afficher(entree1, entree2, '*');
    afficher(entree1, entree2, '/');
    // Pour montrer que la fonction est correctement réglée :
    afficher(entree1, entree2, '?');

return EXIT_SUCCESS;
}