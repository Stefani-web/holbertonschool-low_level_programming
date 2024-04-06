# <p align="center">Bit manipulation</p>

<p align="center">
  <img src="https://i0.wp.com/thecleverprogrammer.com/wp-content/uploads/2020/11/Bit-Manipulation-in-C-Programming-Language.png?fit=1280%2C720&ssl=1" alt="img Bit manipulation" />
</p>

La manipulation de bits en C est une technique qui permet de travailler directement avec les bits individuels d’une valeur stockée en mémoire. En utilisant les opérateurs de manipulation de bits, les développeurs peuvent effectuer des opérations logiques et arithmétiques au niveau des bits, ce qui peut être plus rapide et plus efficace que de travailler avec des valeurs entières ou d’autres types de données.

Voici les opérateurs de manipulation de bits les plus couramment utilisés en C :

- ET bit à bit (&) : Compare chaque bit de deux nombres et renvoie un 1 pour chaque position où les deux bits sont 1.
- OU inclusif bit à bit (|) : Compare chaque bit de deux nombres et renvoie un 1 pour chaque position où au moins un des bits est 1.
- OU exclusif bit à bit (^) : Compare chaque bit de deux nombres et renvoie un 1 pour chaque position où exactement un des bits est 1.
- NON bit à bit (~) : Inverse tous les bits d’un nombre (les 0 deviennent des 1 et vice versa).
- Décalage à gauche (<<) : Décale tous les bits d’un nombre vers la gauche d’un certain nombre de positions, en ajoutant des zéros à droite.
- Décalage à droite (>>) : Décale tous les bits d’un nombre vers la droite d’un certain nombre de positions, en ajoutant des zéros à gauche ou en conservant le bit de signe pour les nombres signés.
Ces opérateurs sont essentiels pour des tâches telles que le réglage, la suppression ou le basculement de bits individuels, la création de masques de bits et l’extraction de sous-ensembles de bits d’un nombre entier.

# <p align="center">Exemples</p>

Voici un exemple de;

- Définir un bit (mettre un bit à 1) :

```
unsigned int setBit(unsigned int num, int position)
{
	return (num | (1 << position));
}

```
- Effacer un bit (mettre un bit à 0) :

```
unsigned int clearBit(unsigned int num, int position)
{
	return (num & ~(1 << position));
}

```
- Basculer un bit (changer l’état d’un bit) :

```
unsigned int toggleBit(unsigned int num, int position)
{
	return (num ^ (1 << position));
}

```
- Vérifier un bit (tester si un bit est à 1 ou 0) :

```
int checkBit(unsigned int num, int position)
{
	return ((num >> position) & 1);
}

```
- Obtenir le bit le plus à droite (trouver le premier bit à 1) :
```
int getRightmostSetBit(unsigned int num)
{
	return (num & -num);
}

```
Ces fonctions démontrent comment effectuer des opérations de base sur les bits d’un nombre entier en utilisant les opérateurs de manipulation de bits en C.

# <p align="center">Instructions d'installation</p>
```
- Un compilateur C : All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89

Pour compiler et exécuter ce projet de liste doublement chaînée en C, suivez les étapes ci-dessous :

1. **Installer un compilateur C** :
   Assurez-vous que vous avez un compilateur C installé sur votre système. GCC est un choix populaire pour les systèmes Unix-like, tandis que Visual Studio est couramment utilisé sur Windows.

2. **Télécharger le code source** :
   Clonez ou téléchargez le code source du projet depuis le dépôt GitHub ou toute autre plateforme de partage de code.

3. **Compiler le projet** :
	Ouvrez un terminal ou une invite de commande et naviguez jusqu'au répertoire contenant le code source. Compilez le code en utilisant la commande suivante :
	```bash
	gcc -o nom_du_programme source.c
```
- Vous êtes autorisé à utiliser [_putchar](https://github.com/hs-hq/_putchar.c/blob/main/_putchar.c)

# <p align="center">commandes de compilation pour chaque taches</p>

```
0. gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-binary_to_uint.c -o a
```

```
1. gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-print_binary.c _putchar.c -o b
```

```
2. gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 2-get_bit.c -o c
```

```
3. gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c 3-set_bit.c -o d
```

```
4. gcc -Wall -pedantic -Werror -Wextra -std=gnu89 4-main.c 4-clear_bit.c -o e
```

```
5. gcc -Wall -pedantic -Werror -Wextra -std=gnu89 5-main.c 5-flip_bits.c -o f
```
# <p align="center">Prototypes</p>
```
int _putchar(char c);
unsigned int binary_to_uint(const char *b);
void print_binary(unsigned long int n);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);
int clear_bit(unsigned long int *n, unsigned int index);
unsigned int flip_bits(unsigned long int n, unsigned long int m);
```

# <p align="center">Tutoriels</p>

- [Bit manipulation](https://www.youtube.com/watch?v=glYr5m0Q0eA&ab_channel=CodingOverflow)

## ➤ License
Distributed under the MIT License.
See [LICENSE](https://www.holbertonschool.fr/) for more information.


## 🙇 Author
#### Stephanie Carvalho
- LinkedIn: [Stephanie C.rvalho](https://www.linkedin.com/in/stephanie-c-35582a13a/)
