#include "lists.h"



/**
* print_listint - Prints All ElemEnts of a LinkEd List
*
* @h: Linked List of TYpe listint_t to Be  Printed
*
* Return: NUM of nOdeS
*/
size_t print_listint(const listint_t *h)
{
	size_t number = 0;

	while (h)
	{
		printf("%d\n", h->n);
		number++;
		h = h->next;
	}

	return (number);
}
