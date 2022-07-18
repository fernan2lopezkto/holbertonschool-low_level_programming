#include "lists.h"
#include <stdlib.h>
/**
 *insert_nodeint_at_index - insert node at given positions
 *@head: is the list
 *@idx: index
 *@n: n value
 *Return: new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0, size =0;
	listint_t *tmp = *head;
	listint_t *cont = *head;
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	if (!head)
		return (NULL);

	while (cont->next)
	{
		size++;
		cont = cont->next;
	}
	if (size < idx)
	{
		return (NULL);
	}
	else
	{
		while (tmp->next)
		{
			if (i == idx - 1)
			{
				new->n = n;
				new->next = tmp->next;
				tmp->next = new;
			}
			tmp = tmp->next;
			i++;
		}
	}
	return (new);
}
