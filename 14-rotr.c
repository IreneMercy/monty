#include "monty.h"
/**
  *f_rotr- rotates the stack to the bottom
  *@head: stack head
  *@counter: line_number
  *Return: no return
 */
void f_rotr(stack_t **head, __attribute__((unused)) unsigned int counter)
{
	stack_t *a_copy;

	a_copy = *head;
	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	while (a_copy->next)
	{
		a_copy = a_copy->next;
	}
	a_copy->next = *head;
	a_copy->prev->next = NULL;
	a_copy->prev = NULL;
	(*head)->prev = a_copy;
	(*head) = a_copy;
}
