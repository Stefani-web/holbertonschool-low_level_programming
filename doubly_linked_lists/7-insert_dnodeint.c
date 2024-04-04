#include "lists.h"
/**
  * insert_dnodeint_at_index - Function that inserts new node given position
  * @h: A double pointer to the head of the doubly linked list
  * @idx: index of the list where the new node should be added starting with 0
  * @n: The data to insert into the new node.
  *
  * Return: The address of the new node, or NULL on failure
  */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *current;
	unsigned int index;

	if (h == NULL)
		return (NULL);
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;
	if (idx == 0) /* Insert at the beginning */
	{
		new_node->next = *h;
		if (*h != NULL)
			(*h)->prev = new_node;
		*h = new_node;
		return (new_node);
	}
	current = *h;
	for (index = 0; current != NULL && index < idx; index++)
		current = current->next;

	if (index == idx && current != NULL) /* Insert in the middle */
	{
		new_node->next = current;
		new_node->prev = current->prev;
		current->prev->next = new_node;
		current->prev = new_node;
		return (new_node);
	}
	else if (index == idx && current == NULL) /* Insert at the end */
	{
		current = *h;
		while (current->next != NULL)
			current = current->next;
		current->next = new_node;
		new_node->prev = current;
		return (new_node);
	}
	free(new_node); /* If it's not possible to add the new node at index idx */
	return (NULL);
}
