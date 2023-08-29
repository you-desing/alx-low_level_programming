#include "lists.h"
/**
 * free_listint - Free list
 *
 * @head: the list
*/
void free_listint(listint_t *head)
{
	listint_t *X;

	while (head)
	{
		X = head;
		head = head->next;
		free(X);
	}
}
