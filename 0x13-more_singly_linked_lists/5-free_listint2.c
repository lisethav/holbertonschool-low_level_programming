#include "lists.h"
/**
 *free_listint2 - frees a listint_t list.
 *@head: input of type listint_t
 */
void free_listint2(listint_t **head)
{
	if (head == NULL)
	{
		return;
	}
	while (*head != NULL)
	{
		*head = (*head)->next;
		free(*head);
	}
}
