#include "lists.h"

/**
 *add_nodeint_end - adds a new node at the end of a listint_t lisT
 *
 *@head: input of type listint_t
 *@n: input of type int
 *Return: the address of the new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *end_node, *node;

	end_node = *head;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
	{
		return (NULL);
	}
	else
	{
		node->n = n;
		node->next = NULL;

		if (end_node != NULL)
		{
			while (end_node->next != NULL)
			{
				end_node = end_node->next;
			}
			end_node->next = node;
		}
		else
		{
			*head = node;
			return (node);
		}
	}
	return (node);
}
