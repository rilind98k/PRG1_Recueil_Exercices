# Déclaration de variables

Pour chaque séquence d'instructions suivante, déterminez si elle est correcte ou pas : 
- Si oui, donnez la valeur de la variable au terme de la séquence.
- Sinon, expliquez pourquoi la séquence n'est pas correcte.

1. 
   ~~~cpp
    int n = 1;            // n initialisé à 1
    n = 1 - 2 * n;        // nouveau n = 1 - 2 * 1 (calcul fait de gauche à droite) = -1
    n = n + 1;            // n = -1 + 1 = 0
   ~~~
2.  
    ~~~cpp
    int n = 1;
    n = n + 1;
    int n = 1 - 2 * n;    // cela ne marche pas car la variable n est déclarée deux fois avec int
    ~~~
3. 
    ~~~cpp
    int n = 1, p = 2;
    n = (n + 1) * (n - k); // la variable k n'existe pas, marche pas
    ~~~
4. 
    ~~~cpp
    int n, m = 0;         // la variable n n'existe pas encore
    n = 2 * n - 1;
    m = n + 1;
    ~~~
 5. 
    ~~~cpp
    int n = 5, m = 0;
    const int nb_produit = 10;   
    m = n * nb_produit - 1;     // 5 * 10 - 1 = 49
    ~~~
 6. 
    ~~~cpp
    int n = 5, m = 0;
    const int nb_produit = 10;
    nb_produit -= 1;        // vue qu'au dessus on fait const int, const est immuable donc réattribuer une variable ne marche pas.
    m = n * nb_produit;
    ~~~

<details>
<summary>Solution</summary>

1. `n = 0`
2. Non, ce n'est pas correct. La variable `n` est déclarée deux fois.
3. Non, ce n'est pas correct. La variable `k` n'est pas déclarée.
4. Non, ce n'est pas correct. La variable `n` n'est pas initialisée : son contenu est indéterminé.
5. `m = 49`
6. Non, ce n'est pas correct. La variable `nb_produit` est définie `const` et ne peut pas être modifiée (`nb_produit -= 1`).

</details>
