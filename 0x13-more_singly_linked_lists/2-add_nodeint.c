#include "lists.h"

/**
  * add_nodeint - adds a new node at the beginning of a listint_t list
  *
  * @head: pointer to a list_t pointer that points to the head struct
  * @n: number to add to the list
  * Return: the address of the new element
  */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = *head;
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = *head;
	*head = new_node;
	return (*head);
}
