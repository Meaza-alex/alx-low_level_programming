#include "lists.h"
/**
 * add_dnodeint - adds node at top
 * @head: address of head linked lst
 * @n: number
 * Return: address of new node or NULL
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode = (dlistint_t *)malloc(sizeof(dlistint_t));

	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	newnode->next = NULL;
	newnode->prev = NULL;
	if ((*head) == NULL)
	{
		*head = newnode;
		return (newnode);
	}
	else
	{
		(*head)->prev = newnode;
		newnode->next = *head;
		*head = newnode;
		return (newnode);
	}
}
