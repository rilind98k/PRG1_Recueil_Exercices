# Paramètre par adresse

Que produit le code ci-dessous ?

~~~cpp
#include <iostream>
#include <cstdlib>
using namespace std;

void adresse(int* param) {

   *param += 1;            // param à l'adresse 0x16eea3648
                           // (cette valeur ne sera pas la même dans votre cas)

   cout << "param          : " <<  param << endl;
   cout << "adr param      : " << &param << endl;
   cout << "valeur pointee : " << *param << endl;
}

int main() {
   int entier = 17;        // entier à l'adresse 0x16eea3698
                           // (cette valeur ne sera pas la même dans votre cas)
   cout << "entier         : " <<  entier << endl;
   cout << "adr entier     : " << &entier << endl;

   adresse(&entier);

   cout << "entier         : " <<  entier << endl;
   cout << "adr entier     : " << &entier << endl;

   return EXIT_SUCCESS;
}
/*
 * ============================================================================
 * MÉMO DE RÉVISION : PASSAGE PAR ADRESSE (POINTEURS)
 * ============================================================================
 * 1. Qu'est-ce qu'un pointeur (int* param) ?
 *    C'est une variable qui possède sa propre case mémoire (0x16eea3648), 
 *    mais dont le contenu est l'adresse d'une autre variable (0x16eea3698).
 *
 * 2. Les 3 syntaxes à ne pas confondre :
 *    - param   : Contenu du pointeur -> L'adresse cible (0x16eea3698).
 *    - &param  : Adresse du pointeur lui-même en mémoire (0x16eea3648).
 *    - *param  : Déréférencement -> On suit la flèche pour lire ou modifier 
 *                la valeur située à l'adresse cible (17 devient 18).
 *
 * 3. Règles d'or :
 *    - "*param += 1" modifie la VALEUR pointée (17 -> 18), jamais l'adresse.
 *    - Une variable ne déménage jamais : l'adresse de 'entier' (&entier) 
 *      reste figée à 0x16eea3698 du début à la fin du programme.
 * ============================================================================
 */
~~~

| Element          | Affichage |
|---               |---        |
| entier           |     17      |
| adr entier       |0x16eea3698|
| param            |0x16eea3698|
| adr param        |0x16eea3648|
| valeur pointee   |18|
| entier           |18|
| adr entier       |0x16eea3698|


<details>
<summary>Solution</summary>

| Element          | Affichage    |
|---               |---           |
| entier           | 17           |
| adr entier       | 0x16eea3698  |
| param            | 0x16eea3698  |
| adr param        | 0x16eea3648  |
| valeur pointee   | 18           |
| entier           | 18           |
| adr entier       | 0x16eea3698  |

</details>
