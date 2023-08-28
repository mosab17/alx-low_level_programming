#include "lists.h"

/**
 * get_nodeint_at_index - returns the node at a certain index
 * @head: first node
 * @index: index of the node
 *
 * Return: pointer
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int j = 0;
	listint_t *tmp = head;

	while (tmp && j < index)
	{
		tmp = tmp->next;
		j++;
	}

	return (tmp ? tmp : NULL);
}

