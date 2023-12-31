#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"
/**
 *free_list - Frees a list
 *@head: A pointer to the list head
 *
*/

void free_list(list_t *head)
{
	list_t *t;

	while (head)
	{
		t = head->next;
		free(head->str);
		free(head);
		head = t;
	}
}
