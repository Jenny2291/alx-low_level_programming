#include "lists.h"

/**
 * add_nodeint_end - add a new node at the end
 * of a linked list
 * @head: A pointer to the address of the head of a list.
 * @n: n element.
 *
 * Return: If the function fails - null,
 * otherwise - the address of the new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *temp;


	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	else
	{
		new->n = n;
		new->next = NULL;
	}
	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = new;
	}

	return (*head);
}
