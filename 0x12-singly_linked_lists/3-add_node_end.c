#include <stdlib.h>
#include <string.h>
#include "lists.h"


/**
* add_node_end - adds a new node at the end of a linked list
*
* @head: double pointer to the list_t list
* @str: string to put in the new node
*
* Return: address of the new element, or NULL if it failed
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *neww;
	list_t *tmp = *head;
	unsigned int len = 0;

	while (str[len])
		len++;

	neww = malloc(sizeof(list_t));
	if (!neww)
		return (NULL);

	neww->str = strdup(str);
	neww->len = len;
	neww->next = NULL;

	if (*head == NULL)
	{
		*head = neww;
		return (neww);
	}

	while (tmp->next)
		tmp = tmp->next;

	tmp->next = neww;

	return (neww);
}