#include "lists.h"

/**
 * free_list - Function that frees a list_t list
 * @head: Pointer to the head of the list_t list
 */

void free_list(list_t *head)
{
	list_t *current;

	while (head)
	{
		current = head;
		head = current->next;
		free(current->str);
		free(current);
	}
}
