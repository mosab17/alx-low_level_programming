#include "lists.h"

/**
 * add_nodeint - adds a new node
 * @head: pointer
 * @n:  insert new node
 *
 * Return: pointer to the new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ne;

	ne = malloc(sizeof(listint_t));
	if (!ne)
		return (NULL);

	ne->n = n;
	ne->next = *head;
	*head = ne;

	return (ne);
}
