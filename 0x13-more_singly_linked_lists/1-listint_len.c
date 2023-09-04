#include "lists.h"
/**
 * listint_len - returns the number of elements
 *
 * @h : the element of list
 *
 * Return: Always 0.
*/
size_t listint_len(const listint_t *h)
{
	size_t i = 0;
	const listint_t *ptr = NULL;

	ptr = h;
	while (ptr != NULL)
	{
		i++;
		ptr = ptr->next;
	}
	return (i);
}
