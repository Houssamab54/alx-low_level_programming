#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at a given position in a
 *                            listint_t linked list
 * @head: double pointer to head node of list
 * @index: index of the node that should be deleted (starting at 0)
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *node, *temp;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	node = *head;
	for (i = 0; i < index - 1 && node != NULL; i++)
		node = node->next;

	if (node == NULL || node->next == NULL)
		return (-1);

	temp = node->next;
	node->next = temp->next;
	free(temp);

	return (1);
}
