#include "lists.h"









































/**
* delete_nodeint_at_index - deletes Node in LinkEd List at certaiN INDEX
*
* @head: Pointer to 1st ELEmEnt in LisT
* @index: unsigned int INDEX of Node to be deletED
*
* Return: 1 Success
* -1 if Fail
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *teemep = *head;
	listint_t *current = NULL;
	unsigned int lmno = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(teemep);
		return (1);
	}

	while (lmno < index - 1)
	{
		if (!teemep || !(teemep->next))
			return (-1);
		teemep = teemep->next;
		lmno++;
	}


	current = teemep->next;
	teemep->next = current->next;
	free(current);

	return (1);
}
