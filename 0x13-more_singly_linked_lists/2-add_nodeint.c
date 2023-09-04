#include "lists.h"
/**
 * add_nodeint - adds a new node at the beginning
 *
 * @head: the element
 *
 * @n: data the element
 *
 * Return: the address of the new element, or NULL
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr = (listint_t *)malloc(sizeof(listint_t));

	if (head == NULL)
		return (NULL);

	ptr->n = n;
	ptr->next = *head;
	*head = ptr;
	return (*head);
}
