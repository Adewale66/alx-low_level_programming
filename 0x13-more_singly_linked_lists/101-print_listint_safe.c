#include "lists.h"

/**
 * print_listint_safe - prints a linked list, safely
 * @head: list of type listint_t to print
 * Return: number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t num = 0;
	long int diff;
	const listint_t *current = head;
	const listint_t *loop = NULL;
	int loop_found = 0;

	while (current)
	{
		diff = current - current->next;
		num++;
		printf("[%p] %d\n", (void *)current, current->n);
		if (diff > 0)
			current = current->next;
		else
		{
			loop = current->next;
			printf("-> [%p] %d\n", (void *)loop, loop->n);
			loop_found = 1;
			break;
		}
	}
	if (loop_found)
	{
		current = head;
		while (current != loop)
		{
			const listint_t *temp = current;

			current = current->next;
			free((void *)temp);
		}
	}

	return (loop_found == 1 ? num : 98);
}
