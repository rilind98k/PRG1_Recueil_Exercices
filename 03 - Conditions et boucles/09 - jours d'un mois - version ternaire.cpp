#include <iostream>
using namespace std;

int main() {
   cout << "Entrez un no de mois (1-12) : ";
   int no_mois; cin >> no_mois;


    cout << "Ce mois contient " ;

    cout << (no_mois == 2 ? "28 ou 29" : 
             no_mois == 4 or
             no_mois == 6 or
             no_mois == 9 or
             no_mois == 11 ? "30" : "31") ;
  
  // Rappel pour ternaire : (condition ? oui : non)
        
    cout << " jours." << endl;
    return EXIT_SUCCESS;
}
