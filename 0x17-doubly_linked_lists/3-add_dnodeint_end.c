#include "lists.h"
/**
 * add_dnodeint_end - adds node at end
 * @head: head address of linked list
 * @n: number of new value for new node
 * Return: address of new node or NULL
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *tmp, *newnode;

	tmp = *head;
	newnode = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->next = NULL;
	newnode->prev = NULL;
	newnode->n = n;
	if ((*head) == NULL)
	{
		*head = newnode;
		return (newnode);
	}
	while (tmp->next)
	{
		tmp = tmp->next;
	}
	newnode->prev = tmp;
	tmp->next = newnode;
	return (newnode);
}

