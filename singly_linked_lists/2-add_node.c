#include "lists.h"
#include <string.h>

/**
 * add_node - function that adds a new node at the beginning of a list_t list
 * @head: Double pointer to the head of the list_t list
 * @str: String to be duplicated and stored in the new node
 *
 * Return: The address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return (NULL); /* Return NULL if malloc fails */
	}

	/* Duplicate the string using strdup and store it in the new node */
	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	/* Set the new node's next pointer to the current head of the list */

	new_node->next = *head;

	*head = new_node;

	return (new_node);
}