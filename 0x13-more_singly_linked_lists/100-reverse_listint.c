#include "lists.h"



























/**
* reverse_listint - Reverses LiNkED lisT
*
* @head: POinter TO 1st nOde in THE list
*
* Return: Pointer to 1st nOde in NEW list
*/
listint_t *reverse_listint(listint_t **head)
{
	listint_t *previouss = NULL;
	listint_t *nextone = NULL;

	while (*head)
	{
		nextone = (*head)->next;
		(*head)->next = previouss;
		previouss = *head;
		*head = nextone;
	}

	*head = previouss;

	return (*head);
}
