#include "lists.h"


























/**
* insert_nodeint_at_index - inserts NEW node in LinkEd LisT
* at GIVEN Position
*
* @head: Pointer TO 1st nOde in ThE List
* @idx: IndEx whEre tHe NEW node is to be added
* @n: data to BE insertED in NEW node
*
* Return: Pointer to NEW node
* or NULL
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int ijk;
	listint_t *newe;
	listint_t *temp = *head;

	newe = malloc(sizeof(listint_t));
	if (!newe || !head)
		return (NULL);

	newe->n = n;
	newe->next = NULL;

	if (idx == 0)
	{
		newe->next = *head;
		*head = newe;
		return (newe);
	}

	for (ijk = 0; temp && ijk < idx; ijk++)
	{
		if (ijk == idx - 1)
		{
			newe->next = temp->next;
			temp->next = newe;
			return (newe);
		}
		else
			temp = temp->next;
	}

	return (NULL);
}
