#include "lists.h"
/**
 *list_len - function that return len of linked list
 *
 *@h: the pointer to the first node
 *
 *Return: the len of the linked list
 *
 */
size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
	h = h->next;
	i++;
	}
	return (i);
}
