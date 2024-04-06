# <p align="center">File I/O</p>

<p align="center">
  <img src="https://www.tutorialcup.com/wp-content/uploads/2019/09/Files-I_O-in-C-Programming.jpg" alt="img File I/O" />
</p>

La gestion des fichiers en C, ou File I/O (Input/Output), permet de lire et d’écrire des données dans des fichiers stockés sur le disque. Cela est essentiel pour les programmes qui nécessitent une persistance des données au-delà de l’exécution du programme.

Voici les concepts clés de la gestion des fichiers en C :

- **Fichiers texte et binaires** : Les fichiers texte stockent les données en caractères ASCII, tandis que les fichiers binaires les stockent en format binaire.
- **Ouverture de fichier** : Utilisez fopen() pour ouvrir un fichier en spécifiant le mode (comme “r” pour lire, “w” pour écrire, etc.).
- **Lecture et écriture** : Les fonctions fscanf() et fprintf() sont utilisées pour lire et écrire dans des fichiers texte, tandis que fread() et fwrite() sont pour les fichiers binaires.
- **Fermeture de fichier** : Après les opérations, fermez le fichier avec fclose() pour libérer les ressources.
- **Pointeur de fichier** : Un pointeur de type FILE est utilisé pour représenter un fichier ouvert en C.

Les opérations de fichier en C sont puissantes et permettent une manipulation détaillée des données stockées de manière permanente

# <p align="center">Exemples</p>

Voici un exemple de;

- Ouverture d’un fichier :

```
FILE *fptr;
fptr = fopen("nom_du_fichier.txt", "r");
if (fptr == NULL)
{
	printf("Erreur lors de l'ouverture du fichier.\n");
	exit(1);
}

```
- Lecture d’un fichier texte :

```
char c;
while ((c = fgetc(fptr)) != EOF)
{
	printf("%c", c);
}

```
- Écriture dans un fichier texte :

```
fprintf(fptr, "Ceci est un texte exemple.\n");

```
- Fermeture d’un fichier :

```
fclose(fptr);
```
- Lecture d’un fichier binaire :
```
struct monStruct data;
fread(&data, sizeof(struct monStruct), 1, fptr);

```
- Écriture dans un fichier binaire :

```
struct monStruct data = { .attribut1 = valeur1, .attribut2 = valeur2 };
fwrite(&data, sizeof(struct monStruct), 1, fptr);
```
Ces exemples montrent comment ouvrir, lire, écrire et fermer des fichiers en C

# <p align="center">Instructions d'installation</p>
```
- Un compilateur C : All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
## Instructions d'installation

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
0. gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-read_textfile.c -o a
```

```
1. gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-create_file.c -o b
```

```
2. gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 2-append_text_to_file.c -o c
```

```
3. gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-cp.c -o cp
```

# <p align="center">Prototypes</p>
```
int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

```

# <p align="center">Tutoriels</p>

- [File I/O](https://en.wikipedia.org/wiki/File_descriptor)
- [C Programming in Linux Tutorial - open() read() write() Functions](https://www.youtube.com/watch?v=WxNSJAbQ8Ik&ab_channel=DexTutor)

## ➤ License
Distributed under the MIT License.
See [LICENSE](https://www.holbertonschool.fr/) for more information.


## 🙇 Author
#### Stephanie Carvalho
- LinkedIn: [Stephanie C.rvalho](https://www.linkedin.com/in/stephanie-c-35582a13a/)
