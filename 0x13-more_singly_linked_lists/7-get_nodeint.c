#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: pointer to head node of list
 * @index: index of the node, starting at 0
 *
 * Return: nth node of list or NULL if node does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *node;

	if (head == NULL)
		return (NULL);

	node = head;
	for (i = 0; i < index; i++)
	{
		if (node == NULL)
			return (NULL);
		node = node->next;
	}

	return (node);
}
