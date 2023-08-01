#include "lists.h"

/**
* listint_len - returns NUM of EleEMEnts in LinkEd LiSts
*
* @h: LINked LisT of TypE listint_t TO go throuGH
*
* Return: NUM of nodes
*/
size_t listint_len(const listint_t *h)
{
	size_t numberr = 0;

	while (h)
	{
		numberr++;
		h = h->next;
	}

	return (numberr);
}
