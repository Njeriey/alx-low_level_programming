#include <stdio.h>
#include "lists.h"

/**
 * print_listint - print all numbes in the list
 * @h: pointer to the listint_t list to print
 *
 * Return: the numbers of node printed
 */

size_t print_listint(const listint_t *h)
}
	size_t num = 0;

	while (h)
	{
		printf("%d\n", h->n);
		num++;
		h = h->next;
	}

	return (num);
{
