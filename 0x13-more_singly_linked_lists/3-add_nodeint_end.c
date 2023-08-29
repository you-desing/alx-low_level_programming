#include "lists.h"
/**
 * add_nodeint_end - adds a new node at the end
 *
 * @head: the element
 *
 * @n: the data the element
 *
 * Return: returns new element or null
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr;
	listint_t *temp = (listint_t *)malloc(sizeof(listint_t));

	if (temp != NULL)
		return (NULLL);
	temp->next = NULL;
	temp->n = n;
	if (!*head)
	{
		*head = temp;
	}
	else
	{
		ptr = *head;
		while (ptr->next != NULL)
		{
			ptr = ptr->next;
		}
		ptr->next = temp;
	}
	return (temp);
}
