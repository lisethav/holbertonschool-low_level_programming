#include "lists.h"

/**
  * pop_listint - delete the head node of a listint_t linked list
  *
  * @head:  double pointer to the beginning of the list
  * Return: returns the head node’s data (n) if empty return 0
  */
int pop_listint(listint_t **head)
{
	int stock;
	listint_t *node, *new_node;

	if (head == NULL)
		return (0);
	new_node = node = *head;
	if (*head)
	{
		stock = node->n;
		*head = node->next;
		free(new_node);
	}
	else
		stock = 0;
	return (stock);
}
