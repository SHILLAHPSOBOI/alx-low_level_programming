#include "lists.h"

/**
 * add_nodeint - adds a node at the beginning of a linked list
 * @head: pointer to the first node in the list
 * @n: data to insert in that new node
 *
 * Return: pointer to the new node or NULL
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	mew = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
