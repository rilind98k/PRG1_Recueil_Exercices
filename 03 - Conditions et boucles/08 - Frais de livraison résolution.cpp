//
// Created by Rilind on 29.09.2026.
//
#include <iostream>

using namespace std;

int main() {
    cout << "Livraison en Suisse ? (O/N) ";
    char reponse1; cin >> reponse1;

    if (reponse1 == 'O') {
        cout << "Habitez-vous aux Grisons ou au Tessin ? (O/N) ";
        char reponse2; cin >> reponse2;
            if (reponse2 == 'O') {
            cout << "Les frais de livraison s'élèvent à 7.00 CHF";
        } else {
            cout << "Les frais de livraison s'élèvent à 5.00 CHF";
        }
    } else {
        cout << "Habitez-vous au Liechtenstein ? (0/N) ";
        char reponse3; cin >> reponse3;
            if (reponse3 == 'O') {
            cout << "Les frais de livraison s'élèvent à 7.00 CHF";
            } else {
                cout << "Les frais de livraison s'élèvent à 10.00 CHF";
    }
    }
    return EXIT_SUCCESS;
}