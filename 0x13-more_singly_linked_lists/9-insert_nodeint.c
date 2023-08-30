#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given index
 * @head: pointer to head of listint_t list
 * @idx: index to add new node
 * @n: integer value
 *
 * Return: Address of new node or NULL if failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *ptr;
	unsigned int i;

	new_node = malloc(sizeof(listint_t));

	if ((head == NULL) || (new_node == NULL))
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;
	ptr = *head;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	for (i = 0; ptr != NULL && i < idx - 1; i++)
	{

		if ((ptr == NULL) || (ptr->next == NULL))
		{
			free(new_node);
			return (NULL);
		}
		ptr = ptr->next;
	}

	new_node->next = ptr->next;
	ptr->next = new_node;

	return (new_node);
}

