#include "lists.h"

/**
 * sum_listint - sums all the data(n) of listint_t list
 * @head: pointer to the head of listint_t list
 *
 * Return: returns sum of listint_t list
 */
int sum_listint(listint_t *head)
{
	listint_t *ptr;
	int sum = 0;


	if (head == NULL)
		return (0);

	ptr = head;

	while (ptr != NULL)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}

	return (sum);

}
