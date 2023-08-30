#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node of a listint_t
 *
 * @head: the linked list
 *
 * @index: the index input
 *
 * Return: return the nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int current_index = 0;

	while (head != NULL)
	{
		if (current_index == index)
		{
			return (head);
		}
		head = head->next;
		current_index++;
	}
	return (NULL);
}
