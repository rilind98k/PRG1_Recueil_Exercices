# Passage par valeur vs par référence
Le programme ci-dessous contient plusieurs erreurs :

1) Pour chaque ligne fautive, indiquez son numéro et précisez la nature de l'erreur

2) En admettant maintenant que les lignes fautives ont été supprimées du programme ci- dessous, déterminer "à la main" ce qu'il va afficher à l'exécution ?

~~~cpp
1  #include <cstdlib>
2  #include <iostream>

3  using namespace std;
4
5  void f(double x);
6  void g(double& x);
7  void h(const double& x); 
9  int main() {
10
11    const int C = 1;
12    int n = C;
13    double x = C;
14   
15    f(C);
16    f(n);
17    f(x);
18    g(C);
19    g(n);
20    g(x);
21    h(C);
22    h(n);
23    h(x);
24   
25    return EXIT_SUCCESS;
26 }
27   
28 void f(double x) {
29    x = x + 1;
30    cout << "x = " << x <<endl;
31 }
32 
33 void g(double& x) {
34    x = x + 1;
35    cout << "x = "<< x <<endl;
36 }
37 
38 void h(const double& x) {
39    x = x + 1;
40    cout << "x = " << x <<endl;
41 }
~~~
## Mémo de révision : Passage par valeur vs par référence (`const` et types)

### 1. Les 3 profils de paramètres (Les règles d'or)

* **`void f(double x)` — Passage par valeur (Le Photocopieur) :**
    * **Comportement :** Crée une copie indépendante en mémoire.
    * **Souplesse :** **Maximale.** Accepte les constantes (`const`) et convertit automatiquement les types compatibles (ex: un `int` est converti en `double` lors de la copie). L'original dans le `main` n'est jamais modifié.
* **`void g(double& x)` — Passage par référence (Le Chirurgien) :**
    * **Comportement :** Se branche directement sur la variable d'origine pour pouvoir la modifier.
    * **Souplesse :** **Zéro (Ultra-strict).**
        1. Refuse les constantes (`const`), car il exige le droit de modification.
        2. Exige **exactement le même type** : impossible de brancher une référence `double&` sur une variable `int` (leurs tailles et formats en mémoire sont différents).
* **`void h(const double& x)` — Référence constante (La Vitrine blindée) :**
    * **Comportement :** Donne accès à la variable sans la copier, mais avec **interdiction formelle de la modifier** dans la fonction.
    * **Souplesse :** **Élevée.** Comme la fonction promet de ne rien modifier (`const`), le compilateur l'autorise à accepter des constantes ET des types différents (ex: si on lui passe un `int`, le compilateur crée un `double` temporaire invisible juste le temps de la fonction).

---

### 2. Résolution de l'exercice

#### Question 1 : Les 3 lignes fautives (Erreurs de compilation)
* **Ligne 18 (`g(C);`) :** **Interdit.** `C` est une constante (`const int`). La fonction `g` attend une référence modifiable (`double&`). On ne peut pas donner les clés d'une constante à une fonction qui peut la modifier (de plus, le type `int` ne correspond pas à `double`).
* **Ligne 19 (`g(n);`) :** **Interdit (Conflit de type).** `n` est de type `int`, mais `g` exige une référence directe sur un `double` (`double&`). Une référence non-constante ne peut pas convertir un type à la volée.
* **Ligne 39 (`x = x + 1;` dans `h`) :** **Interdit (Violation de `const`).** La signature `void h(const double& x)` engage la fonction à lire `x` sans jamais le modifier. Tenter de lui ajouter `1` provoque une erreur de compilation immédiate.

*(Note : `h(C)` et `h(n)` aux lignes 21-22 sont 100 % valides grâce au mot-clé `const` qui autorise la création d'une variable temporaire de type `double`).*

---

#### Question 2 : Affichage à l'exécution (une fois les lignes 18, 19 et 39 supprimées)
*État initial dans le `main` : `C = 1`, `n = 1`, `x = 1.0`*

1. **`f(C);` (Ligne 15) :** `f` travaille sur une copie de `C`, fait `1 + 1` et affiche **`x = 2`** *(dans le `main`, `C` vaut toujours `1`)*.
2. **`f(n);` (Ligne 16) :** `f` travaille sur une copie de `n`, fait `1 + 1` et affiche **`x = 2`** *(dans le `main`, `n` vaut toujours `1`)*.
3. **`f(x);` (Ligne 17) :** `f` travaille sur une copie de `x`, fait `1 + 1` et affiche **`x = 2`** *(dans le `main`, le vrai `x` vaut toujours `1.0`)*.
4. **`g(x);` (Ligne 20) :** **Modification réelle !** `g` travaille par référence (`&`) sur le vrai `x` du `main`. Elle calcule `1 + 1`. Le `x` du `main` devient définitivement **`2.0`**. Affiche **`x = 2`**.
5. **`h(C);` (Ligne 21) :** Sans la ligne 39, `h` ne fait qu'afficher la valeur reçue. Affiche **`x = 1`**.
6. **`h(n);` (Ligne 22) :** `n` n'a jamais bougé. Affiche **`x = 1`**.
7. **`h(x);` (Ligne 23) :** Le vrai `x` ayant été modifié par `g(x)` à l'étape 4, il vaut désormais `2`. Affiche **`x = 2`**.

#### Résultat final dans la console :
```text
x = 2
x = 2
x = 2
x = 2
x = 1
x = 1
x = 2
