#include "lists.h"

/**
 * add_node_end - Function that adds a new node at the end of a list_t list
 * @head: Double pointer to the head of the list_t list
 * @str: String to be duplicated and stored in the new node
 *
 * Return: The address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *last_node;
	int Stringlength = 0;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	while (str[Stringlength] != '\0')
	{
		Stringlength++;
	}

	new_node->len = Stringlength;
	new_node->str = strdup(str);
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	last_node = *head;

	while (last_node->next != NULL)
	{
		last_node = last_node->next;
	}

	last_node->next = new_node;

	return (new_node);
}
