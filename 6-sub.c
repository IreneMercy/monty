#include "monty.h"
/**
  *f_sub - sustration
  *@head: stack head
  *@counter: line_number
  *Return: no return
 */
void f_sub(stack_t **head, unsigned int counter)
{
	stack_t *ret;
	int sub, nodes;

	ret = *head;
	for (nodes = 0; ret != NULL; nodes++)
		ret = ret->next;
	if (nodes < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	ret = *head;
	sub = ret->next->n - ret->n;
	ret->next->n = sub;
	*head = ret->next;
	free(ret);
}
