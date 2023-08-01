#include "lists.h"






























/**
* sum_listint - calculates THE sum of aLL Data in listint_t list
*
* @head: 1st Node in THE LinkEd LiSt
*
* Return: resulting SUM
*/
int sum_listint(listint_t *head)
{
	int sumlistng = 0;
	listint_t *tmp = head;

	while (tmp)
	{
		sumlistng += tmp->n;
		tmp = tmp->next;
	}

	return (sumlistng);
}
