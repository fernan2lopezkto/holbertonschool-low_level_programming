#include <stdio.h>
#include "lists.h"

int _strlen(char *s);

/**
 *add_node - add node to start the list
 *
 *
 *
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}
	else
	{

	}
	new->str = strdup(str);
	new->len = _strlen(str);
	new->next = head;
	return(new);
}

/**
 * _strlen - function for determinate string longer
 * @s: is the string to count
 * Return: int
 */
int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}
