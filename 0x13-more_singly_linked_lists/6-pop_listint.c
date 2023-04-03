#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 *               and returns the head node's data
 * @head: double pointer to head node of list
 *
 * Return: Head node's data (n) or 0 if list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data;

	if (head == NULL || *head == NULL)
		return (0);

	temp = *head;
	data = temp->n;
	*head = (*head)->next;
	free(temp);

	return (data);
}
