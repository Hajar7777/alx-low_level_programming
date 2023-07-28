#include <stddef.h>
#include "lists.h"
#include <stdlib.h>
#include <string.h>


/**
* add_node_end - aDDs New Node AT the End of a LinkEd LIST
*
* @head: dOUble Pointer TO the list_t list
* @str: string to BE put in New nOde
*
* Return: address of New element
* NULL if failed
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
