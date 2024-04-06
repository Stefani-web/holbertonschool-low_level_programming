# <p align="center">Singly_linked_lists</p>

<p align="center">
  <img src="https://i.ytimg.com/vi/vcQIFT79_50/maxresdefault.jpg" alt="img singly linked" />
</p>

Une liste simplement chaînée en C est une structure de données linéaire composée de nœuds, où chaque nœud contient une donnée et un pointeur vers le nœud suivant dans la séquence. Le dernier nœud pointe vers NULL, indiquant la fin de la liste. Voici les caractéristiques principales d’une liste simplement chaînée :

- Structure de Nœud : Chaque nœud a généralement deux composants : une partie de données (qui peut être de n’importe quel type de données) et un pointeur vers le nœud suivant.

- Insertion et Suppression : Les opérations d’insertion et de suppression sont efficaces car elles ne nécessitent que de modifier les pointeurs, sans avoir besoin de déplacer les éléments comme dans un tableau.

- Parcours: Pour accéder à un élément, il faut parcourir la liste depuis le début jusqu’à l’élément désiré. Cela peut être moins efficace que l’accès direct offert par les tableaux.

- Utilisation de la Mémoire : La mémoire est allouée dynamiquement pour chaque nouvel élément, ce qui peut conduire à une meilleure utilisation de la mémoire par rapport aux tableaux de taille fixe.

# <p align="center">Exemples</p>

Voici un exemple simple de;

- la définition d’un nœud en C :

```
struct Node
{
    int data;
    struct Node* next;
};
```
- Insertion au début :

```
void insertStart(struct Node** head, int newData)
{
    struct Node* newNode = (struct Node*) malloc(sizeof(struct Node));
    newNode->data = newData;
    newNode->next = *head;
    *head = newNode;
}
```
- Suppression du début :

```
void deleteStart(struct Node** head)
{
    if (*head == NULL) return;
    struct Node* temp = *head;
    *head = (*head)->next;
    free(temp);
}
```
- Affichage de la liste :

```
void printList(struct Node* node)
{
    while (node != NULL)
    {
        printf("%d ", node->data);
        node = node->next;
    }
    printf("\n");
}
```
- Recherche d’un élément :

```
struct Node* search(struct Node* head, int key)
{
    struct Node* current = head;
    while (current != NULL)
    {
        if (current->data == key) return current;
        current = current->next;
    }
    return (NULL);
}
```
Ces exemples couvrent les opérations de base que vous pouvez effectuer sur une liste simplement chaînée.

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

- Please use this data structure for this project:

```
/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t;
```


# <p align="center">commandes de compilation pour chaque taches</p>

```
0. gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-print_list.c -o a
```

```
1. gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-list_len.c -o b
```

```
2. gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 2-add_node.c 0-print_list.c -o c
```

```
3. gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c 3-add_node_end.c 0-print_list.c -o d
```

```
4. gcc -Wall -pedantic -Werror -Wextra -std=gnu89 4-main.c 4-free_list.c 3-add_node_end.c 0-print_list.c -o e
```
# <p align="center">Prototypes</p>
```
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);
```

# <p align="center">Tutoriels</p>

- [Linked Lists](https://www.youtube.com/watch?v=udapt4FGY20&t=130s&ab_channel=UNSWeLearning)
- [Link](https://www.geeksforgeeks.org/singly-linked-list-tutorial/)

## ➤ License
Distributed under the MIT License.
See [LICENSE](https://www.holbertonschool.fr/) for more information.


## 🙇 Author
#### Stephanie Carvalho
- LinkedIn: [Stephanie C.rvalho](https://www.linkedin.com/in/stephanie-c-35582a13a/)
