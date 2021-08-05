#include "lists.h"

/**
  * free_listint - function that frees a listint_t list
  * @head: pointer to the beginning of the list
  */
void free_listint(listint_t *head)
{
	if (head == NULL)
		return;
	free_listint(head->next);
	free(head);
}