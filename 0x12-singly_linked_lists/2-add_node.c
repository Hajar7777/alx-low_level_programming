#include <stdlib.h>
#include "lists.h"
#include <string.h>

/**
* add_node - aDDs new node at
* Beginning of LiNked lIsT
*
* @head: Double Pointer TO list_t list
*
* @str: NEW string to BE addED in tHe node
*
* Return: Address of New Element
* or NULL if fails
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int ln = 0;

	while (str[ln])
		ln++;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = ln;
	new->next = (*head);
	(*head) = new;

	return (*head);
}
