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
	int Stringlength = 0;

	while (str[Stringlength] != '\0')
	{
		Stringlength++;
	}

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->str = strdup(str);
	new_node->len = Stringlength;
	new_node->next = *head;

	*head = new_node;

	return (new_node);
}
