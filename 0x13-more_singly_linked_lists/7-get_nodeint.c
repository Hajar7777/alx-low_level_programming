#include "lists.h"




















/**
* get_nodeint_at_index - Returns THE node at
* certain INDEX in Linked List
*
* @head: 1st node THE linked List
* @index: INDEX of Node to be returned
*
* Return: pointer to Node we are loOking for
* NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int ijk = 0;
	listint_t *temp = head;

	while (temp && ijk < index)
	{
		temp = temp->next;
		ijk++;
	}

	return (temp ? temp : NULL);
}
