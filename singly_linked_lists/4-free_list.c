#include "lists.h"

/**
 * free_list - Frees a list_t list.
 * @head: Pointer to the head of the list_t list.
 */

void free_list(list_t *head)
{
	list_t *current; /* Declare a pointer to the current node */

	/* Loop through the list and free each node */
	while (head)
	{
		current = head; /* Set the current node to the head of the list */
		head = current->next; /* Move the head to the next node */
		free(current->str); /* Free the string stored in the current node */
		free(current); /* Free the current node */
	}
}
