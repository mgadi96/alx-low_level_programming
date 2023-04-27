#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list
 *
 * @head: first node in the singly linked list
 * @str: the value of str in the node
 *
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	char *s;
	list_t *new_node, *tmp;
	int len;

	s = strdup(str);
	if (str == NULL || s == NULL)
		return (NULL);

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}

	len = 0;
	while (str[len] != '\0')
		len++;

	new_node->str = s;
	new_node->len = len;
	new_node->next = NULL;

	if (*head != NULL)
	{
		tmp = *head;

		while (tmp->next != NULL)
			tmp = tmp->next;

		tmp->next = new_node;
	}
	else
		*head = new_node;

	return (new_node);
}

