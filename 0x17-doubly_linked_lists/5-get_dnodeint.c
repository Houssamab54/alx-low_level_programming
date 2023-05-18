#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
 * @head: pointer to the head of the list
 * @index: index of the node, starting from 0
 *
 * Return: the nth node of the list, or NULL if it does not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
unsigned int i;
dlistint_t *current;
current = head;
for (i = 0; i < index && current != NULL; i++)
current = current->next;
if (i == index && current != NULL)
return (current);
else
return (NULL);
}
