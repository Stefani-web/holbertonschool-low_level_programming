# <p align="center">Singly_linked_lists</p>

<p align="center">
  <img src="https://i.ytimg.com/vi/vcQIFT79_50/maxresdefault.jpg" alt="img singly linked" />
</p>

A singly linked list in C is a linear data structure composed of nodes, where each node contains a piece of data and a pointer to the next node in the sequence. The last node points to NULL, indicating the end of the list. Here are the main characteristics of a simply linked list:

- **Node Structure**: Each node generally has two components: a data part (which can be of any data type) and a pointer to the next node.

- **Insert and Delete**: Insert and delete operations are efficient because they only require modifying pointers, without needing to move elements like in an array.

- **Browse**: To access an element, you must browse the list from the beginning to the desired element. This may be less efficient than the direct access provided by tables.

- **Memory Usage**: Memory is dynamically allocated for each new element, which can lead to better memory usage compared to fixed-size arrays.

# <p align="center">Examples</p>

This is a simple example of;

- the definition of a node in C :

```
struct Node
{
    int data;
    struct Node* next;
};
```
- Insert at start:

```
void insertStart(struct Node** head, int newData)
{
    struct Node* newNode = (struct Node*) malloc(sizeof(struct Node));
    newNode->data = newData;
    newNode->next = *head;
    *head = newNode;
}
```
- Deleting the beginning :

```
void deleteStart(struct Node** head)
{
    if (*head == NULL) return;
    struct Node* temp = *head;
    *head = (*head)->next;
    free(temp);
}
```
- List view :

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
- Searching for an item:

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
These examples cover the basic operations you can perform on a singly linked list.

# <p align="center">Instructions d'installation</p>
```
## Installation Instructions

To compile and run this doubly linked list project in C, follow the steps below:

A C compiler: All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89

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


# <p align="center">compilation commands for each task</p>

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

# <p align="center">Tutorials</p>

- [Linked Lists](https://www.youtube.com/watch?v=udapt4FGY20&t=130s&ab_channel=UNSWeLearning)
- [Link](https://www.geeksforgeeks.org/singly-linked-list-tutorial/)

## ➤ License
Distributed under the MIT License.
See [LICENSE](https://www.holbertonschool.fr/) for more information.


## 🙇 Author
#### Stephanie Carvalho
- LinkedIn: [Stephanie C.rvalho](https://www.linkedin.com/in/stephanie-c-35582a13a/)
