#include "lists.h"











































/**
* find_listint_loop - FiNds LOOp in LinkEd List
*
* @head: LInked list to BE lookED for
*
* Return: addrESs of the node where LOOp stRTS
* NULL
*/
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slowest = head;
	listint_t *fastest = head;

	if (!head)
		return (NULL);

	while (slowest && fastest && fastest->next)
	{
		fastest = fastest->next->next;
		slowest = slowest->next;
		if (fastest == slowest)
		{
			slowest = head;

			while (slowest != fastest)
			{
				slowest = slowest->next;
				fastest = fastest->next;
			}
			return (fastest);
		}
	}
	return (NULL);
}
