# Bien nommer ses variables

Les déclarations ci-dessous sont toutes syntaxiquement correctes. Pour chacune, indiquez si le nom choisi respecte les recommandations vues en cours (nom explicite ; Cpp Core Guidelines NL5, NL7, NL8, NL9, NL10). Si non, dites quelle recommandation n'est pas respectée et proposez un meilleur nom.

Rappel des recommandations :

- Un nom doit dire à quoi sert la variable (`surface = largeur * hauteur;` plutôt que `c = a * b;`).
- NL5 : le nom ne mentionne pas le type (pas de notation hongroise, e.g. `nSize`).
- NL7 : la longueur du nom est proportionnelle à sa portée (distance entre ses utilisations).
- NL8 : un style de nommage consistant dans tout le programme.
- NL9 : pas de TOUT_EN_MAJUSCULE, réservé aux macros.
- NL10 : préférez le style `snake_case`.

|  #  | Déclaration (et contexte) | Conforme ? | Recommandation / meilleur nom |
| --- | --- | --- | --- |
| 1 | `int nNbEtudiants = 25;` | Non | nb_etudiants|
| 2 | `double surface = largeur * hauteur;` | Oui | |
| 3 | `const int NB_MAX_ETUDIANTS = 100;` | Non | nb_max_etudiants |
| 4 | `int nombreTotalDeBouteillesDansUnPack = 6;` | Non | Trop long, nb_bouteille |
| 5 | `double x = 13.2 * nb_bouteilles; // poids du pack en grammes` | Non | on sait pas ce que c'est x directement : poids_pack par ex|
| 6 | `int nbPacks, nb_bouteilles, PrixUnitaire;` | Non | Il utilise trois styles différents, il doit garder un style cohérent|
| 7 | `double dblPrix = 2.5;` | non | dbl c'est un type |
| 8 | `int a = 4, b = 12;` (utilisées 40 lignes plus loin, dans un calcul de prix) | non | pire exemple de la flemme |
| 9 | `double volume_canette_l = 0.33;` | oui | |
| 10 | `int INT = 3;` | non | Nom en majuscule et ne dit rien de l'usage |

<details>
<summary>Solution</summary>

|  #  | Déclaration | Conforme ? | Recommandation / meilleur nom |
| --- | --- | --- | --- |
| 1 | `int nNbEtudiants = 25;` | Non | NL5 : le préfixe `n` (notation hongroise) indique le type ; NL10 : camelCase. → `nb_etudiants` |
| 2 | `double surface = largeur * hauteur;` | Oui | Nom explicite, snake_case (l'exemple du cours) |
| 3 | `const int NB_MAX_ETUDIANTS = 100;` | Non | NL9 : le tout-en-majuscules est réservé aux macros, même pour une constante. → `nb_max_etudiants` |
| 4 | `int nombreTotalDeBouteillesDansUnPack = 6;` | Non | NL7 : trop long pour l'usage ; NL10 : camelCase. → `nb_bouteilles` (ou `nb_bouteilles_pack` si l'on manipule aussi d'autres quantités) |
| 5 | `double x = 13.2 * nb_bouteilles;` | Non | Le nom ne dit pas ce que contient la variable : c'est le commentaire qui fait le travail. → `poids_pack` (et le commentaire peut disparaître) |
| 6 | `int nbPacks, nb_bouteilles, PrixUnitaire;` | Non | NL8 : trois styles différents dans une même ligne. → `nb_packs, nb_bouteilles, prix_unitaire` |
| 7 | `double dblPrix = 2.5;` | Non | NL5 : `dbl` mentionne le type (et devient faux si le type change). → `prix` |
| 8 | `int a = 4, b = 12;` | Non | NL7 : des noms d'une lettre ne conviennent qu'à une portée très courte ; utilisées 40 lignes plus loin, on ne sait plus ce qu'elles représentent. → par exemple `nb_articles`, `prix_unitaire` |
| 9 | `double volume_canette_l = 0.33;` | Oui | Explicite, snake_case ; le suffixe `_l` indique l'unité (litre), pas le type : c'est utile, pas de la notation hongroise |
| 10 | `int INT = 3;` | Non | NL9 : tout en majuscules ; et le nom ne dit rien de l'usage (il ressemble au mot réservé `int`, source de confusion). → un nom qui décrit la valeur stockée |

</details>
