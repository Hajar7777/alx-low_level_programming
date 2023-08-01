#include "lists.h"












/**
* free_listint2 - frees THE linked list
*
* @head: Pointer to THE listint_t list to fREE
*/
void free_listint2(listint_t **head)
{
	listint_t *teemp;

	if (head == NULL)
		return;

	while (*head)
	{
		teemp = (*head)->next;
		free(*head);
		*head = teemp;
	}

	*head = NULL;
}
