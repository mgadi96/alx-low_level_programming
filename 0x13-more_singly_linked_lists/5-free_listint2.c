#include "lists.h"

/**
 * free_listint - frees a listint_t list
 *
 * @head: the first node in the singly linked list
 *
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *tmp_node;

	while (head != NULL)
	{
		tmp_node = head->next;
		free(head);
		head = tmp_node;
	}
}
#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 *
 * @head: a pointer to the @ of the first node in the singly linked list
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp_node;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		tmp_node = (*head)->next;
		free(*head);
		*head = tmp_node;
	}

	head = NULL;
}

