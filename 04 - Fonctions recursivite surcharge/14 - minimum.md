# min(a, b, c)
Écrire une fonction *min* qui retourne le minimum de 3 valeurs reçues en paramètre.

Les instructions suivantes doivent être possibles:

~~~cpp
int a = 5;
int b = 2;
int c = 9;

cout << min(a, b, c);
min(a, b, c) = 1;
int& d = min(a, b, c);
~~~

**NB** ne pas utiliser de `if`

~~~cpp
int& min(int& a, int& b, int& c) {
   return (a < b && a < c) ? a : (b < c ? b : c);
}
~~~
## Mémo de révision : Retour par référence (`int&`) et Opérateur ternaire (`? :`)

### 1. Pourquoi retourner une référence (`int& min(...)`) ?
* **Retour par valeur classique (`int min(...)`) :** Renvoie un simple **nombre** (une valeur temporaire morte, appelée *rvalue*). On peut l'afficher (`cout << min(a, b, c);`), mais il est interdit de la mettre à gauche d'un signe `=` (écrire `min(a, b, c) = 1;` reviendrait à écrire `2 = 1;`, ce qui fait planter le compilateur).
* **Retour par référence (`int& min(...)`) :** Renvoie **la variable gagnante elle-même** (la vraie boîte en mémoire, appelée *lvalue*).
    * `min(a, b, c) = 1;` devient légal : si `b` est le minimum, cette ligne se transforme littéralement en **`b = 1;`** et modifie la variable d'origine.
    * `int& d = min(a, b, c);` devient légal : crée un nouvel alias `d` branché directement sur la variable gagnante.

### 2. Pourquoi les paramètres DOIVENT aussi être en référence (`int& a, int& b, int& c`) ?
* **Règle de survie mémoire :** Il est strictement interdit de retourner une référence (`int&`) vers une variable locale ou un paramètre passé par valeur (copie).
* **La raison :** Si `a`, `b`, `c` étaient des copies (`int a`), elles seraient détruites à la fin de la fonction (`}`). Renvoyer un accès direct vers une copie détruite créerait une référence pendante (*dangling reference* / crash mémoire). En recevant `int& a, int& b, int& c`, la fonction reçoit les variables originales du `main` et peut renvoyer l'une d'elles en toute sécurité.

---

### 3. L'opérateur ternaire (`condition ? valeur_si_vrai : valeur_si_faux`)
Pour remplacer les `if / else`, on utilise l'opérateur ternaire. Pour comparer 3 variables sans angle mort, il existe deux méthodes :

#### Méthode A : L'approche logique avec `&&` (La plus lisible)
~~~cpp
int& min(int& a, int& b, int& c) {
    return (a < b && a < c) ? a : (b < c ? b : c);
}
~~~
<details>
<summary>Solution</summary>

~~~cpp
int& min(int& a, int& b, int& c) {
      return a < c ? (a < b ? a : b) : (b < c ? b : c);
}

~~~

</details>

<details>
<summary>Solution plus propre</summary>

~~~cpp

int& min(int& a, int& b) {
   return a < b ? a : b;
}

int& min(int& a, int& b, int& c) {
   return min(a, min(b,c));
}

~~~

</details>
