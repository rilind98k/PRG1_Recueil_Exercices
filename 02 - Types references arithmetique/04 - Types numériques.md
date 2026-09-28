# Types numériques (théorie)

1. Donnez le nom des 5 types entiers signés du C++, du plus court au plus long.
  
signed char  
short  
int  
long  
long long  

Le mot clé `signed` est optionnel, sauf pour `char` (`signed char`). Seules garanties : `sizeof(short) <= sizeof(int) <= sizeof(long) <= sizeof(long long)`, `short` et `int` sur au moins 16 bits, `long` au moins 32, `long long` au moins 64.

2. Idem pour les 5 types entiers non signés 

unsigned char
unsigned short
unsigned int
unsigned long
unsigned long long


3. Le type int est-il signé ou non signé par défaut ?

signé

4. Le domaine de définition des entiers est-il fixé par la norme ou dépend-il de l'environnement utilisé ?

Dépend de l'environnement utilisé
