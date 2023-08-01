#include <stdio.h>
#include "lists.h"

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);















































/**
* looped_listint_len - Counts NUM of ALL unique nOdes
* in lOOpEd listint_t LinKed LisT
*
* @head: Pointer TO Head of tHe listint_t TO checK
*
* Return: IF tHe LiSt is NOT lOOpEd 0
* Otherwis NUM of unique nodEs in tHe lisT
*/
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *tortois, *rabbit;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	tortois = head->next;
	rabbit = (head->next)->next;

	while (rabbit)
	{
		if (tortois == rabbit)
		{
			tortois = head;
			while (tortois != rabbit)
			{
				nodes++;
				tortois = tortois->next;
				rabbit = rabbit->next;
			}

			tortois = tortois->next;
			while (tortois != rabbit)
			{
				nodes++;
				tortois = tortois->next;
			}

			return (nodes);
		}

		tortois = tortois->next;
		rabbit = (rabbit->next)->next;
	}

	return (0);
}











/**
* print_listint_safe - PriNTS listint_t list iN a safe manner
*
* @head: POInter to HeaD of listint_t list.
*
* Return: NUM of nodes in the list.
*/
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes, index = 0;

	nodes = looped_listint_len(head);

	if (nodes == 0)
	{
		for (; head != NULL; nodes++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (index = 0; index < nodes; index++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (nodes);
}
