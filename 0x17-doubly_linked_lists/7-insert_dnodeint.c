#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: pointer to head of list
 * @idx: index of the list where the new node should be added
 * @n: data for new node
 * Return: address of the new node, or NULL if it failed
*/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t  *new_node, *temp;
	unsigned int i = 0;

	if (h == NULL)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);

	temp = *h;

	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = temp;
		new_node->prev = NULL;
		*h = new_node;
		return (new_node);
	}

	while (i < idx - 1)
	{
		temp = temp->next;
		if (temp == NULL)
		{
			free(new_node);
			return (NULL);
		}
		i++;
	}

	new_node->next = temp->next;
	new_node->prev = temp;
	temp->next = new_node;

	return (new_node);
}
