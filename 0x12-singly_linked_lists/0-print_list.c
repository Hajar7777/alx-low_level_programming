#include <stddef.h>
#include "lists.h"
#include <stdio.h>

/**
* print_list - PrinTs alL elementSs of a linKed list
*
* @h: pointer tolist_t list TO prinT
*
* Return: Number of nodeSs to BE priNtED
*/
size_t print_list(const list_t *h)
{
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
}
