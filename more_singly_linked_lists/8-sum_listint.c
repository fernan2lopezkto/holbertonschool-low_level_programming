#include "lists.h"
/**
 * sum_listint - sum l in list
 * @head: linked list
 * Return: int whit value of add
 */
int sum_listint(listint_t *head)
{
	int counter = 0;
	listint_t *list_tmp = head;

	if (!head)
		return (counter);
	while (list_tmp)
	{
		counter = counter + list_tmp->n;
		list_tmp = list_tmp->next;
	}
	return (counter);
}
