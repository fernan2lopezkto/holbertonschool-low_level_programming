#include "lists.h"

/**
 * get_nodeint_at_index - return n value in index place
 * @head: linked list
 * @index: is the place
 * Return: n in index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *tmp = head;

	while (i < index)
	{
		i++;
		tmp = tmp->next;
	}
	return (tmp);
}
