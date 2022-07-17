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
	unsigned int size = 0;
	listint_t *tmp = head;
	listint_t *cont = head;

	while (cont->next)
	{
		size++;
		cont = cont->next;
	}
	if (size < index)
	{
		return (NULL);
	}
	else
	{
		while (i < index)
		{
			i++;
			tmp = tmp->next;
		}
	}
	if (!tmp)
		return (NULL);

	return (tmp);
}
