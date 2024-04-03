#include "lists.h"

/**
 * print_list - Print elements of the list
 * @h: pointer to the first element in the lis
 *
 * Return: the number of nodes in the list
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%s]\n", h->str);
		}
		h = h->next;
		count++;
	}

	return (count);
}
