#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list
 *
 * @h: first node in the singly linked list
 *
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t nodes_count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		nodes_count++;
	}

	return (nodes_count);
}

