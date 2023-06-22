#include "monty.h"
/**
 * f_pall - pall
 * @head: head
 * @counter: N/O
 */
void f_pall(stack_t **head, unsigned int counter)
{
	stack_t *nw;
	(void)counter;

	nw = *head;
	if (nw == NULL)
		return;
	else
	{
		while (nw != NULL)
		{
			printf("%d\n", nw->n);
			nw = nw->next;
		}
	}
}
