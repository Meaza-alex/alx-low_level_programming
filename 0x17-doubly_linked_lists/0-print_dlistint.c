#include "lists.h"
/**
 * print_dlistint - prints length and elements
 * @h: head of list
 * Return: size_t value
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *tmp = h;
	int count = 0;

	while (tmp != NULL)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->next;
		count++;
	}
	return (count);
}
