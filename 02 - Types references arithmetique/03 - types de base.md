# Types de base - littéraux et expressions

Pour chacune des déclarations ci-dessous, indiquez le type de base (`int`, `double`, `char`, `bool`) qu'il faut écrire à la place de `???` pour que la variable stocke exactement la valeur de l'expression d'initialisation, sans conversion.

|  #  | Déclaration | Type |
| --- | -------------- | --------- |
| 1 | `??? var1 = 10;` | int |
| 2 | `??? var2 = 1.;`  | double |
| 3 | `??? var3 = '1';`  | char (il est mis entre guillemets) |
| 4 | `??? var4 = 0.5;` | double |
| 5 | `??? var5 = 'r';` | char |
| 6 | `??? var6 = true;` | bool |
| 7 | `??? var7 = 25.0;` | double |
| 8 | `??? var8 = 3;` | int |
| 9 | `??? var9 = var1 / var8;` | int (car 10/3, division entière : 3) |
| 10 | `??? var10 = var1 / var4;` | double (car 10/0.5, division réelle : 20) |

<details>
<summary>Solution</summary>

|  #  | Déclaration | Type |
| --- | -------------- | --------- |
| 1 | `int var1 = 10;` | int |
| 2 | `double var2 = 1.;`  | double |
| 3 | `char var3 = '1';`  | char |
| 4 | `double var4 = 0.5;` | double |
| 5 | `char var5 = 'r';` | char |
| 6 | `bool var6 = true;` | bool |
| 7 | `double var7 = 25.0;` | double |
| 8 | `int var8 = 3;` | int |
| 9 | `int var9 = var1 / var8;` | int (division entière : 3) |
| 10 | `double var10 = var1 / var4;` | double (division réelle : 20.0) |

</details>
