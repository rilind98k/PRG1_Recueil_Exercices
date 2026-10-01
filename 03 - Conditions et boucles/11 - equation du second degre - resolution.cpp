#include <iostream>
#include <cmath>
using namespace std;

int main() {

   cout << "Donnez les valeurs de a, b, et c : " << endl;
    double a, b, c;
    cout << "Valeur de a : " ; cin >> a;
    cout << "Valeur de b : " ; cin >> b;
    cout << "Valeur de c : " ; cin >> c;

   if (a == 0) {
      if (b == 0) {
         if (c == 0) {
// Si a, b, c valent 0 :
            cout << "tout x est un solution" << endl;
         }
         else {
            cout << "pas de solution" << endl;
         }
      } else {
// Si seulement a vaut 0 :
         cout << "1 solution : " << -c/b << endl;
      }
// Si a, b, c != 0 :
   } else {
      double discriminant = b * b - 4 * a * c;
      if(discriminant < 0 ) {
         cout << "pas de solution" << endl;
      } else if (discriminant == 0) {
         cout << "1 solution : " << - b / (2 * a) << endl;
      } else {
         double d = sqrt(discriminant);
         double r1 = (-b + d) / (2 * a);
         double r2 = (-b - d) / (2 * a);
         cout << "2 solutions : " << r1 << " et " << r2 << endl;
      }
   }
}
