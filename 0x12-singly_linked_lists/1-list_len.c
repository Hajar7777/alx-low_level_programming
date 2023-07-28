#include <stddef.h>
#include "lists.h"
#include <stdlib.h>

/**
* list_len - retUrns number of elements in Linked lIsT
*
* @h: Pointer TO list_t list
*
* Return: NUM of ElEmEntsS in h
*/
size_t list_len(const list_t *h)
{
	size_t mnjk = 0;

	while (h)
	{
		mnjk++;
		h = h->next;
	}
	return (mnjk);
}
