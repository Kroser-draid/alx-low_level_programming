#include "lists.h"
/**
 *_strlen - return a length of a string
 *
 *@s: the string to be processed
 *
 *Return: integer length of a string
 *
 */
int _strlen(char *s)
{
	int counter = 0;

	while (*s != '\0')
	{
	counter++;
	s++;
	}
	return (counter);
}

/**
 *print_list - prints a linked list
 *
 *@h: pointer to first node
 *
 *Return: size of the list
 *
 */
size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		printf("[%d] %s\n", _strlen(h->str), h->str ? h->str : "(nil)");
		h = h->next;
		i++;
	}
	return (i);
}
