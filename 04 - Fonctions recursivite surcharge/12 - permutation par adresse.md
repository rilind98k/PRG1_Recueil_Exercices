# Permutation circulaire droite de 3 réels

Reprendre l'exercice [02b-02 - permutation](08%20-%20permutation%20par%20reference.md) mais sans utiliser de référence `double& ref`
## Mémo de révision : Convertir des références (`&`) en pointeurs (`*`)

### 1. Les 3 changements obligatoires (La chaîne du pointeur)
* **Signature :** On remplace `&` par `*` $\rightarrow$ `void fonction(double* x)`
* **Appel :** Dans le `main`, on extrait l'adresse avec `&` $\rightarrow$ `fonction(&x);`
* **Corps :** Dans la fonction, on met `*` devant la variable (`*x`) pour accéder à la vraie valeur au bout de la flèche.

### 2. Le piège de la variable temporaire
* `double temporaire = *z;` $\rightarrow$ `temporaire` est un simple nombre (`double`), **pas** un pointeur.
* Son seul rôle est de sauvegarder la valeur numérique (ex: `3.0`) pendant l'échange. Elle ne prend donc jamais d'étoile `*`.

### 3. Pourquoi `*z = *y` et pas `z = y` ?
* **`*z = *y` :** On ouvre les cases mémoires et on remplace le **nombre** dans `z` par le **nombre** dans `y` (modifie les variables du `main`).
* **`z = y` :** On écrase l'adresse stockée dans `z` par l'adresse de `y`. Les valeurs dans le `main` restent intactes *(bug classique !)*.

### 4. Rappel sur `afficher()`
* Elle garde un passage par valeur classique (`double x`) car elle ne fait que lire une copie des nombres, sans jamais modifier les originaux.
<details>
<summary>Solution</summary>

~~~cpp
#include <cstdlib>
#include <iostream>

using namespace std;

void permutationCirculaireDroite(double* x,
                                 double* y,
                                 double* z);

void afficher(double x,
              double y,
              double z);

//------------------------------------------------------------
int main() {
   double x = 1, y = 2, z = 3;
   for (int i = 1; i <= 3; ++i) {
      permutationCirculaireDroite(&x, &y, &z);
      afficher(x, y, z);
   }
   return EXIT_SUCCESS;
}

//------------------------------------------------------------
void permutationCirculaireDroite(double* x,
                                 double* y,
                                 double* z) {
   double tmp = *z;
   *z = *y;
   *y = *x;
   *x = tmp;
}

//------------------------------------------------------------
void afficher(double x, double y, double z) {
   cout << "x = " << x << "
            y = " << y << "
            z = " << z << endl;
}
~~~
</details>
