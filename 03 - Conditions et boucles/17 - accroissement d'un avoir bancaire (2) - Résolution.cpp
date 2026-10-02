//
// Created by Rilind on 02.10.2026.
//
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    cout << "Entrez le montant initial : ";
    double montant_initial;
    cin >> montant_initial;

    cout << "Entrez le taux d'interet en % : ";
    double taux;
    cin >> taux;

    cout << "Entrez le nombre d'années : ";
    int annees;
    cin >> annees;

    double montant_final(montant_initial * pow(1+(taux/100.), annees));

    cout << "Le montant disponible après: " << annees << "est de " << fixed << setprecision(2) << montant_final << endl ;

    return EXIT_SUCCESS;

}