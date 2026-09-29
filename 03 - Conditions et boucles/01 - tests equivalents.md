# Tests équivalents ? 

Les deux extraits de code suivants sont-ils équivalents ? Justifiez votre réponse.

~~~cpp 
if (prixActuel > 100) {                         // si le prix est au dessus de 100
   nouveauPrix = prixActuel - 20;               // On enleve 20 au prix
} else {
   nouveauPrix = prixActuel - 10;               // Sinon, on enlève que 10
}
~~~

~~~cpp 
if (prixActuel < 100) {                         // Si le prix est en dessous de 100
   nouveauPrix = prixActuel - 10;               // On enleve 10
} else {
   nouveauPrix = prixActuel - 20;               // Sinon on enleve 20
}
~~~
La différence est qu'avec 100, en haut il fait 100-10, et en bas 100-20.
<details>
<summary>Solution</summary>
Non, si prixActuel == 100, la valeur de nouveauPrix diffère. 
</details>