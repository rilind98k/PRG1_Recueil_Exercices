    #include <iostream>
    #include <cmath>

    using namespace std;

    int main() {
        cout << "Entrez le montant initial : ";
        int montant_initial;
        cin >> montant_initial;

        cout << "Entrez le montant cible : ";
        int montant_cible;
        cin >> montant_cible;

        cout << "Entrez le taux d'interet en % : ";
        int taux;
        cin >> taux;

        double temps = ceil((log(montant_cible/montant_initial)/log(1 + (taux/static_cast<double>(100)))));

        cout << "Le montant cible est atteint apres : " << temps << "an(s)" << endl ;

        return EXIT_SUCCESS;

    }