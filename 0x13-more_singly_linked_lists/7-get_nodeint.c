#include "lists.h"

/**
 * get_nodeint_at_index - the nth node of a listint_t linked list
 * @head: head of list
 * @index: index of the node
 *
 * Return: nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int i;

for (i = 0; i < index && head != NULL; i++)
{
head = head->next;
}
return (head);
}
