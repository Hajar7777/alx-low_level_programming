#include "lists.h"



/****
* add_nodeint - aDDs A NEW node at BEginning of a LinKed LiSt
*
* @head: Pointer TO First nodE in tHe List
* @n: data to be inserted in the mentioned NEW node
*
* Return: pointer TO NEW node
* or NULL if FaiLs
****/
listint_t *add_nodeint(listint_t **head, const int n);
{
	listint_t *neww;

	neww = malloc(sizeof(listint_t));
	if (!neww)
		return (NULL);

	neww->n = n;
	neww->next = *head;
	*head = neww;

	return (neww);
}
