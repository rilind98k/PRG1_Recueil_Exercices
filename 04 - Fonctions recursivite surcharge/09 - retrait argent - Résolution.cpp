//
// Created by Rilind on 13.10.2026.
//
#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

double retrait (double montantRetrait, double soldeCourant) {
    double retraitEffectif;
    if (soldeCourant > montantRetrait) {
        retraitEffectif = montantRetrait;
        soldeCourant -= montantRetrait;
    } else {
        retraitEffectif = soldeCourant;
        soldeCourant = 0;
    }
    return retraitEffectif;
}

void afficher (const string& texte, double valeur, int precision) {
    cout << texte << fixed << setprecision(precision) << valeur << endl;
}

int main () {
    double soldeCourant = 500;
    double retraitEffectif;

    retraitEffectif = retrait(300, soldeCourant);
    afficher("Montant retrait effectif = ", retraitEffectif, 1);
    afficher("Solde courant            = ", soldeCourant, 1);

    retraitEffectif = retrait(300, soldeCourant);
    afficher("Montant retrait effectif = ", retraitEffectif, 1);

    afficher("Solde courant            = ", soldeCourant,    1);
    return EXIT_SUCCESS;
}
