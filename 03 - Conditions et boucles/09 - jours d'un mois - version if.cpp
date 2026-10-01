#include <iostream>
using namespace std;

int main() {
   cout << "Entrez un no de mois (1-12) : ";
   int no_mois; cin >> no_mois;

    if (no_mois == 0) {
    cout << "Ce n'est pas un mois" << endl;
    return EXIT_SUCCESS;} 

    cout << "Ce mois comporte ";
    if (no_mois == 1 or no_mois == 3 or no_mois == 5 or no_mois == 7 or no_mois == 8 or no_mois == 10 or no_mois == 12){
        cout << "31" ;
       } else if (no_mois == 2) {
            cout << "28 ou 29" ;
       } else {
        cout << "30" ;
    }
   cout << " jours." << endl;
    return EXIT_SUCCESS;
}
