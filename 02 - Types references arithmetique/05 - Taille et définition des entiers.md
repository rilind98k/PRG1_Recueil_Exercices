# Taille et domaine de définition des types entiers

Ecrire un programme C++ qui détermine / affiche à l'écran, pour un type entier 

- sa taille en bytes
- sa taille en bits (sans utiliser `sizeof` ni le résultat précédent)
- l'intervalle des valeurs possibles
- s'il est signé ou pas

Ce type est défini à la première ligne du programme via une ligne du type 

~~~cpp
using type = unsigned long int;
~~~

(cette ligne, donnée, définit `type` comme un autre nom pour `unsigned long int` ; il suffit de la modifier pour tester un autre type.)

## Exemples d'exécution

Avec `using type = unsigned int;`

~~~ 
Taille : 4 bytes = 32 bits
Plage de valeurs : 0 -> 4294967295
Signé : false
~~~

Avec `using type = signed char;`

~~~
Taille : 1 bytes = 8 bits
Plage de valeurs : -128 -> 127
Signé : true
~~~

Testez votre programme avec les types `int`, `unsigned int`,
`long`, `unsigned long long`, et `char`.
Ma solution :
~~~cpp
#include <iostream>
#include <limits>

using type = unsigned long long int;

int main() {
    // 1. Taille en bytes (octets)
    std::cout << "Taille : " << sizeof(type) << " bytes = ";

    // 2. Taille en bits (Grâce à la bilbio <limits>)
    int bits = std::numeric_limits<type>::digits;   // digits donne le nombre de bits utilisés pourla valeur (sans le signe)
    if (std::numeric_limits<type>::is_signed) {
        bits++;
    }
    std::cout << bits << "bits\n";

    // 3. Plage de valeurs (intervalle)
    // L'opérateur '+' devant les std force l'affichage sous forme de nombre (crucial pour le type char)
    std::cout << "Plage de valeurs : " << +std::numeric_limits<type>::min() << " -> "
              << +std::numeric_limits<type>::max() << "\n";

    // 4. Signé ou pas
    // std::boolalpha permet d'afficher "true" ou "false" au lieu de "1" ou "0"
    std::cout << "Signé : " << std::boolalpha << std::numeric_limits<type>::is_signed << '\n';

    return EXIT_SUCCESS;

}
~~~

<details><summary>Solution</summary>

~~~cpp
int main() {
   
   using type = unsigned;

   cout << "Taille : " << sizeof(type) << " bytes = "
        << (numeric_limits<type>::digits + numeric_limits<type>::is_signed)
        << " bits\nPlage de valeurs : "
        << static_cast<long long>(numeric_limits<type>::lowest())
        << " -> "
        << static_cast<unsigned long long>(numeric_limits<type>::max())
        << "\nSigné : " << boolalpha << numeric_limits<type>::is_signed << endl;
}
~~~

Notes : 

- il est nécessaire de faire la somme de `digits` et du booléen `is_signed`, le premier ne comptant pas le bit de signe
- les `static_cast` vers `long long` / `unsigned long long` servent à afficher la valeur numérique pour les types `char` (sans conversion, `cout` afficherait le caractère ASCII correspondant) ; `long long` contient toutes les valeurs de `lowest()` et `unsigned long long` toutes celles de `max()`

</details>
