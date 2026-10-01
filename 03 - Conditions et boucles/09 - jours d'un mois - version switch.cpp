#include <iostream>
using namespace std;

int main() {
   cout << "Entrez un no de mois (1-12) : ";
   int no_mois; cin >> no_mois;


    cout << "Ce mois contient " ;

    switch(no_mois) {
        case (1):
        case (2): cout << "28 ou 29" ; break;
        case (3):
        case (5):
        case (7):
        case (8):
        case (10):
        case (12): cout << "31" ; break ;
        default: cout << "30" ; break ;
    }
    cout << " jours." << endl;
    return EXIT_SUCCESS;
}
