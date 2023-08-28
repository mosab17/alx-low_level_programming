#include "lists.h"

/**
 * pop_listint - deletes the head node
 * @head: pointer
 *
 * Return: the data inside the elements
 *
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int numb;

	if (!head || !*head)
		return (0);

	numb = (*head)->n;
	tmp = (*head)->next;
	free(*head);
	*head = tmp;

	return (numb);
}

