//
// Created by Rilind on 13.10.2026.
//
#include <cstdlib>
#include <iostream>

using namespace std;


int main() {        // Erreur 1 : f, g et h doivent être avant la fonction main. Donc on va mettre int main() à la fin.
    f;              // + Ajouter parenthèses f()
    g(1, 2.0);
    h(64, 65);

    return EXIT_SUCCESS;
}

void f {            // Erreur 2 : void f() {...} mettre parenthèses
    cout << "Appel de f\n";
}

//------------------------------------------------------------
void g(int i, j) {  // Erreur 3 : on a pas précisé le type de j
    cout << "Appel de g avec i = " << i << " et j = " << j << "\n";
}

//------------------------------------------------------------
void h(int i; char c) {     // Erreur 4 il faut mettre des virgules et pas points virgules
    cout << "Appel de h avec i = " << i << " et c = '" << c << "'\n";
}