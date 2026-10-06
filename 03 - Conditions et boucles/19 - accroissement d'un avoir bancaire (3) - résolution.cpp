//
// Created by Rilind on 02.10.2026.
//
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    double montant_initial;
    do {
        cout << "Entrez le montant initial : ";
        cin >> montant_initial;
    } while (montant_initial < 1000);

    double taux;
    do {
        cout << "Entrez le taux d'interet en % : ";
        cin >> taux;
    } while (taux < -5 || taux > 50);

    int annees;
    do {
        cout << "Entrez le nombre d'années : ";
        cin >> annees;
    } while (annees <= 0);
    double montant_final(montant_initial * pow(1+(taux/100.), annees));

    cout << "Le montant disponible après: " << annees << "est de " << fixed << setprecision(2) << montant_final << endl ;

    return EXIT_SUCCESS;

}