#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

int _strlen(const char *s);

/**
 *add_node_end - add new node to the end of the list
 *@head: new node
 *@str: item to node
 *Return: list_t
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	if (head == NULL)
	{
		new->str = strdup(str);
		new->len = _strlen(str);
		new->next = NULL;
		*head = new;
	}
	else
	{
		while (*head->next != NULL)
			*head = head->next;

		if (*head->next == NULL)
		{
			new->str = strdup(str);
			new->len = _strlen(str);
			new->next = NULL;
			head->next = *new;
		}
	}
	return (new);
}

/**
 * _strlen - function for determinate string longer
 * @s: is the string to count
 * Return: int
 */
int _strlen(const char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}
