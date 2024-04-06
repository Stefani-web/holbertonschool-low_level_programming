# <p align="center">Doubly_linked_lists</p>

<p align="center">
  <img src="https://www.c-sharpcorner.com/article/doubly-linked-list-and-circular-linked-list-in-c-sharp/Images/DeleteAtEnd.png" alt="img doubly linked" />
</p>

A doubly linked list in C is a data structure where each node contains three components: a pointer to the previous node (prev), a piece of data (data), and a pointer to the next node (next). Unlike singly linked lists, doubly linked lists allow bidirectional traversal, making it easier to insert and remove nodes at various positions in the list.

The advantages of doubly linked lists over singly linked lists include more efficient node removal and the ability to iterate through the list in both directions. However, they require more memory due to the additional pointers and slightly more complex operations to maintain the prev and next pointers during insertions and deletions.

# <p align="center">Examples</p>

This is an example of:

- defining a node for a doubly linked list in C:

```
struct Node
{
	int data;
	struct Node* prev;
	struct Node* next;
};

```
- Insert at the beginning:

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
- Deleting the beginning:

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
- Insert at the end:

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
- Removing the ending:

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
- List view:

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

# <p align="center">Installation Instructions</p>
```
## Installation Instructions

To compile and run this doubly linked list project in C, follow the steps below:

A C compiler: All your files will be interpreted/compiled on Ubuntu 20.04 LTS using python3 (version 3.8.5)

1. **Install a C compiler**:
    Make sure you have a C compiler installed on your system. GCC is a popular choice for Unix-like systems, while Visual Studio is commonly used on Windows.

2. **Download the source code**:
    Clone or download the project source code from the GitHub repository or any other code sharing platform.

3. **Compile the project**:
Open a terminal or command prompt and navigate to the directory containing the source code. Compile the code using the following command:
```bash
gcc -o source_program_name.c
```

- You are authorized to use [_putchar](https://github.com/hs-hq/_putchar.c/blob/main/_putchar.c)

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

# <p align="center">compilation commands for each task</p>

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

# <p align="center">Tutorials</p>

- [Doubly Linked Lists](https://www.youtube.com/watch?v=k0pjD12bzP0)

## ➤ License
Distributed under the MIT License.
See [LICENSE](https://www.holbertonschool.fr/) for more information.


## 🙇 Author
#### Stephanie Carvalho
- LinkedIn: [Stephanie C.rvalho](https://www.linkedin.com/in/stephanie-c-35582a13a/)
