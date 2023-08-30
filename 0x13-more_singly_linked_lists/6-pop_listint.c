#include "lists.h"
/**
 * pop_listint - deletes the head node
 *
 * @head: the linked list
 *
 * Return: return data n
*/
int pop_listint(listint_t **head)
{
	listint_t *node;
	int n;

	if (node == NULL || *head == NULL)
		return (0);
	node = (*head)->next;
	n = (*head)->n;
	free(*head);
	(*head) = node;
	return (n);
}
