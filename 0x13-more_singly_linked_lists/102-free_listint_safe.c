#include "lists.h"




































/**
* free_listint_safe - frEES a Linked List
*
* @h: Pointer to 1st nOde in LinKed LIst
*
* Return: NUM of ElEmEnts in FreEd LiSt
*/
size_t free_listint_safe(listint_t **h)
{
	size_t lentie = 0;
	int diff;
	listint_t *tempee;

	if (!h || !*h)
		return (0);
	while (*h)
	{
		diff = *h - (*h)->next;
		if (diff > 0)
		{
			tempee = (*h)->next;
			free(*h);
			*h = tempee;
			lentie++;
		}
		else
		{
			free(*h);
			*h = NULL;
			lentie++;
			break;
		}
	}
	*h = NULL;
	return (lentie);
}
