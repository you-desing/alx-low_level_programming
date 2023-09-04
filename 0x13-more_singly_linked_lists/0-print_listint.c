#include "lists.h"
/**
 * print_listint - prints all the elements of a listint_t list
 *
 * @h: the element we need to print
 *
 * Return: the number of nodes
 *
*/
size_t print_listint(const listint_t *h)
{
	size_t i = 0;
	const listint_t *ptr = NULL;

	ptr = h;
	while (ptr != NULL)
	{
		i++;
		printf("%d\n", ptr->n);
		ptr = ptr->next;
	}
	return (i);
}
