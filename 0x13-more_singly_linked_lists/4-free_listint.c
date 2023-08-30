#include "lists.h"

/**
 * free_listint - frees a linked list
 * @head: A pointer to the head of the listint_t list to be freed.
 *
 * Return: no return.
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	 while ((temp = head) != NULL)
	{
		 temp = head->next;
		free(temp);
		head - tmp;
	}
}
