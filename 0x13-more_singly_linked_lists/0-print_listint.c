#include <stdio.h>
#include "lists.h"

/**
 * print list - print all numbes in the list
 * @h: pointer to the listint_t list to print
 *
 * Return: the numbers of node printed
 */

size_t print_listint(const listint_t *h)
}
	size_t s = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		s++;
	}

	return (s);
{
