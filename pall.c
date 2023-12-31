#include "monty.h"
/**
 * f_pall - prints the ehole stack
 * @head: The stack head
 * @counter: number used used
 * Return: 0
*/
void f_pall(stack_t **head, unsigned int counter)
{
	stack_t *h;
	(void)counter;

	h = *head;
	if (h == NULL)
		return;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
}
