#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: pointer to head of listint_t
 *
 * Return: returns the head nodes data (n)
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (head == NULL)
		return (0);
	else if (*head == NULL)
		return (0);

	temp = *head;
	*head = temp->next;
	n = temp->n;

	free(temp);
	temp = NULL;

	return (n);
}
