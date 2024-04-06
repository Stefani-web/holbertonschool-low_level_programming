# <p align="center">Doubly_linked_lists</p>

<p align="center">
  <img src="https://www.c-sharpcorner.com/article/doubly-linked-list-and-circular-linked-list-in-c-sharp/Images/DeleteAtEnd.png" alt="img doubly linked" />
</p>

Une liste doublement chaînée en C est une structure de données où chaque nœud contient trois composants : un pointeur vers le nœud précédent (prev), une donnée (data), et un pointeur vers le nœud suivant (next). Contrairement aux listes simplement chaînées, les listes doublement chaînées permettent un parcours bidirectionnel, ce qui facilite l’insertion et la suppression de nœuds à diverses positions dans la liste.

Les avantages des listes doublement chaînées par rapport aux listes simplement chaînées incluent une suppression plus efficace des nœuds et la possibilité de parcourir la liste dans les deux sens. Cependant, elles nécessitent plus de mémoire en raison des pointeurs supplémentaires et des opérations légèrement plus complexes pour maintenir les pointeurs prev et next lors des insertions et suppressions.

# <p align="center">Exemples</p>

Voici un exemple de;

- la définition d’un nœud pour une liste doublement chaînée en C :

```
struct Node
{
	int data;
	struct Node* prev;
	struct Node* next;
};

```
- Insertion au début :

```
void insertAtFront(struct Node** head, int newData)
{
	struct Node* newNode = (struct Node*) malloc(sizeof(struct Node));
	newNode->data = newData;
	newNode->prev = NULL;
	newNode->next = (*head);
	if ((*head) != NULL)
	{
		(*head)->prev = newNode;
	}
	(*head) = newNode;
}
```
- Suppression du début :

```
void deleteFromFront(struct Node** head)
{
	if (*head == NULL) return;
	struct Node* toDelete = *head;
	*head = (*head)->next;
	if (*head != NULL)
	{
		(*head)->prev = NULL;
	}
	free(toDelete);
}
```
- Insertion à la fin :

```
void insertAtEnd(struct Node** head, int newData)
{
    struct Node* newNode = (struct Node*) malloc(sizeof(struct Node));
    struct Node* last = *head;
    newNode->data = newData;
    newNode->next = NULL;
    if (*head == NULL)
	{
        newNode->prev = NULL;
        *head = newNode;
        return;
    }
    while (last->next != NULL)
	{
        last = last->next;
    }
    last->next = newNode;
    newNode->prev = last;
}
```
- Suppression de la fin :

```
void deleteFromEnd(struct Node** head)
{
	if (*head == NULL) return;
	struct Node* toDelete = *head;
	if ((*head)->next == NULL)
	{
		*head = NULL;
		free(toDelete);
		return;
	}
	while (toDelete->next != NULL)
	{
		toDelete = toDelete->next;
	}
	toDelete->prev->next = NULL;
	free(toDelete);
}
```
- Affichage de la liste :

```
void printList(struct Node* node)
{
	struct Node* last;
	printf("Parcours dans l'ordre direct : ");
	while (node != NULL)
	{
		printf("%d ", node->data);
		last = node;
		node = node->next;
	}
	printf("\nParcours dans l'ordre inverse : ");
	while (last != NULL)
	{
		printf("%d ", last->data);
		last = last->prev;
	}
	printf("\n");
}
```

# <p align="center">Instructions d'installation</p>
```
- Un compilateur C : All your files will be interpreted/compiled on Ubuntu 20.04 LTS using python3 (version 3.8.5)
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
 * struct dlistint_s - doubly linked list
 * @n: integer
 * @prev: points to the previous node
 * @next: points to the next node
 *
 * Description: doubly linked list node structure
 *
 */
typedef struct dlistint_s
{
    int n;
    struct dlistint_s *prev;
    struct dlistint_s *next;
} dlistint_t;
```

# <p align="center">commandes de compilation pour chaque taches</p>

```
0. gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-print_dlistint.c -o a
```

```
1. gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-dlistint_len.c -o b
```

```
2. gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 2-add_dnodeint.c 0-print_dlistint.c -o c
```

```
3. gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c 3-add_dnodeint_end.c 0-print_dlistint.c -o d
```

```
4. gcc -Wall -pedantic -Werror -Wextra -std=gnu89 4-main.c 3-add_dnodeint_end.c 0-print_dlistint.c 4-free_dlistint.c -o e
```

```
5. gcc -Wall -pedantic -Werror -Wextra -std=gnu89 5-main.c 3-add_dnodeint_end.c 0-print_dlistint.c 4-free_dlistint.c 5-get_dnodeint.c -o h
```
# <p align="center">Prototypes</p>
```
size_t print_dlistint(const dlistint_t *h);
size_t dlistint_len(const dlistint_t *h);
dlistint_t *add_dnodeint(dlistint_t **head, const int n);
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);
void free_dlistint(dlistint_t *head);
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);
int sum_dlistint(dlistint_t *head);
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n);
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index);
```

# <p align="center">Tutoriels</p>

- [Doubly Linked Lists](https://www.youtube.com/watch?v=k0pjD12bzP0)

## ➤ License
Distributed under the MIT License.
See [LICENSE](https://www.holbertonschool.fr/) for more information.


## 🙇 Author
#### Stephanie Carvalho
- LinkedIn: [Stephanie C.rvalho](https://www.linkedin.com/in/stephanie-c-35582a13a/)
