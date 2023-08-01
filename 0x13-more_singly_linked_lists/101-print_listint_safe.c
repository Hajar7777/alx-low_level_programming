#include <stdio.h>
#include "lists.h"

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);






























































/**
* looped_listint_len - counts NUM of unique nOdes
* in lOOped listint_t LinkEd LIsT
*
* @head: Pointer to HeAd of listint_t to chEck
*
* Return: If LiSt is NOT lOOpEd - 0
* OTherwisE NUM of unique nOdes in THE list
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
* print_listint_safe - PrintS listint_t list in a safe manneR
*
* @head: PoinTer to HEAD of listint_t LisT
*
* Return: NUM of nOdEs in LisT
*/
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes, indexexex = 0;

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
		for (indexexex = 0; indexexex < nodes; indexexex++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (nodes);
}
