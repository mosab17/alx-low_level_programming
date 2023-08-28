#include "lists.h"

/**
 * free_listint - frees linked list
 * @head:  freed
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
