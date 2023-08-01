#include "lists.h"














/**
* pop_listint - deletes Head node OF Linked List
*
* @head: Pointer to FIrst ElEmEnt in Linked List
*
* Return: the data inside ElEmEnts that GOT deleted
* or 0 if LIST is empty
*/
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int number;

	if (!head || !*head)
		return (0);

	number = (*head)->n;
	tmp = (*head)->next;
	free(*head);
	*head = tmp;

	return (number);
}
