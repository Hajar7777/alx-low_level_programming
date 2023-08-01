#include "lists.h"




/****
* add_nodeint_end - aDDs Node at End of Linked List
*
* @head: Pointer to tHe 1st ElEmEnt in LisT
* @n: Data to be inserted in NEW ElEmEnt
*
* Return: Pointer to NEW node
* NULL if FaiLs
****/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *nw;
	listint_t *tmp = *head;

	nw = malloc(sizeof(listint_t));
	if (!nw)
		return (NULL);

	nw->n = n;
	nw->next = NULL;

	if (*head == NULL)
	{
		*head = nw;
		return (nw);
	}

	while (tmp->next)
		tmp = tmp->next;

	tmp->next = nw;

	return (nw);
}
