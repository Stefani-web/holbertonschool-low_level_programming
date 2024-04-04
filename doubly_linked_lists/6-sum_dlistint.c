#include "lists.h"

/**
 * sum_dlistint - The sum of all the data (n) of a dlistint_t linked lis
 * @head: A pointer to the head of the doubly linked list
 *
 * Description: Iterates over the doubly linked list starting from
 * the head and adds, the 'n' values of each node add up to the total sum
 * If the list is empty, returns 0.
 *
 * Return: La somme de toutes les données 'n' de la liste
 * ou 0 si la liste est vide.
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *current = head;

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}

	return (sum);
}
