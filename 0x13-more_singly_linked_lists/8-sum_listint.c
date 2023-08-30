#include "lists.h"

/**
 * sum_listint - function return sum of data
 *
 * @head: the linked list
 *
 * Return: return sum the data
*/
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}
