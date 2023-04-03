#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position in a
 *                            listint_t linked list
 * @head: double pointer to head node of list
 * @idx: index of the list where the new node should be added (starting at 0)
 * @n: integer value of the new node
 *
 * Return: address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *node, *new_node;

	if (head == NULL)
		return (NULL);

	if (idx == 0)
		return (add_nodeint(head, n));

	node = *head;
	for (i = 0; i < idx - 1 && node != NULL; i++)
		node = node->next;

	if (node == NULL)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = node->next;
	node->next = new_node;

	return (new_node);
}
