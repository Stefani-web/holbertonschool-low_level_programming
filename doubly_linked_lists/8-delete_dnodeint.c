#include "lists.h"
#include <stdio.h>

/**
  * delete_dnodeint_at_index - Deletes the node at index
  * @head: A double pointer to the head of the doubly linked list
  * @index: The index of the node that should be deleted, starting with 0
  *
  * Return: 1 if the deletion was successful, -1 if it failed
  */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;
	dlistint_t *temp = NULL;
	unsigned int indx = 0;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(temp);
		return (1);
	}

	while (current != NULL && indx < index)
	{
		current = current->next;
		indx++;
	}

	if (current == NULL)
		return (-1);

	temp = current;
	if (current->prev != NULL)
		current->prev->next = current->next;
	if (current->next != NULL)
		current->next->prev = current->prev;

	free(temp);
	return (1);
}
