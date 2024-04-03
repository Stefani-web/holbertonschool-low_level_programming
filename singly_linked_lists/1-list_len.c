#include "lists.h"

/**
 * list_len - Returns the number of elements in a linked list_t list
 * @h: Pointer to the head of the list_t list
 *
 * Return: The number of elements in the list_t list
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;
	const list_t *current = h;


	while (current != NULL)
	{
		count++;
		current = current->next; /* Move to the next element in the list */
	}

	return (count);
}
