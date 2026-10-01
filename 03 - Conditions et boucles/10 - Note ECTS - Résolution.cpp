# include <iostream>
using namespace std;

int main() {
    cout << "Entrez une note UNIGE entre 0 et 6 : ";
    double note_ECTS; 
    cin >> note_ECTS;

    if (note_ECTS < 0 || note_ECTS > 6) {
        cout << "La note n'est pas entre 0 et 6." << endl;
        return EXIT_SUCCESS;
    } else {
        cout << "La note ECTS vaut : " ;
        if (note_ECTS < 4) {
            cout << 'F';
        } else if (note_ECTS < 4.25) {
            cout << 'E';
        } else if (note_ECTS < 4.50) {
            cout << 'D';
        } else if (note_ECTS < 4.75) {
            cout << 'C';
        } else if (note_ECTS < 5.25) {
            cout << 'B';
        } else if (note_ECTS >= 5.25) {
            cout << 'A';
        }
    }
    return EXIT_SUCCESS;
}
