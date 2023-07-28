#ifndef LISTS_H
#define LISTS_H

/**
* struct list_s - SinglY LinkEd List
* @str: stRING - malloc'ed strinG
* @len: leNgth OF the string
* @next: points to NeXt node
*
* Description: singly LinKed list node structure
* for HOLBERTON pRojcT
*/
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

list_t *add_node(list_t **head, const char *str);
size_t print_list(const list_t *h);
void free_list(list_t *head);
size_t list_len(const list_t *h);
list_t *add_node_end(list_t **head, const char *str);

#endif
