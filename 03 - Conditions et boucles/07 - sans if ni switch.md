# Sans if ni switch

Réécrivez les extraits de code suivants en n'utilisant ni `if` ni `switch` mais exclusivement des opérateurs de comparaisons et des opérateurs logiques.

Cet exercice fait travailler un « déclic » très important en C++ : **une comparaison (comme** **i &lt; 1** **) renvoie DÉJÀ un booléen (** **true** **ou** **false** **)**.

Quand un `if` sert uniquement à mettre `true` ou `false` dans une variable booléenne `b`, on peut remplacer tout le bloc `if / else` par une simple expression logique.


~~~cpp
if (i < 1) {
   b = true;
} else {
   b = i > 2;
}

// Réponse
b = (i < 1) or (i > 2);
~~~

<details>
<summary>Solution</summary>

~~~cpp
b = (i < 1) or (i > 2);
~~~
</details>

~~~cpp
if (j == 0) {
   b = true;
} else {
   if (i / j < k) {
      b = false;
   } else {
      b = true;
   }
}

// Réponse
b = (j == 0) or (i / j >= k)
~~~

<details>
<summary>Solution</summary>

~~~cpp
b = (j == 0) or !(i / j < k);
b = (j == 0) or (i / j >= k);
~~~

</details>

~~~cpp
if (j == 0) {
   b = false;
} else {
   if (i / j < k) {
      b = true;
   } else {
      b = false;
   }
}

// Réponse
b = (j != 0) and (i / j < k); 
// Pour que `b` soit `true`, il faut à la fois que `j` ne soit pas nul (`j != 0`) ET que `i / j < k` soit vrai.
// b = (j != 0) and (i / j &lt; k);
~~~

<details>
<summary>Solution</summary>

~~~cpp
b = (j != 0) and (i / j < k);
~~~

</details>
