#include "lists.h"













/**
* free_listint - frees THE linked list
*
* @head: listint_t list to frEE
*/
void free_listint(listint_t *head)
{
	listint_t *tempp;

	while (head)
	{
		tempp = head->next;
		free(head);
		head = tempp;
	}
}
