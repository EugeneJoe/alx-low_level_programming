#include "lists.h"

/**
 * find_common_node - finds the common node for a linked list with a loop
 * @p: pointer to listint_t node
 * @q: pointer to listint_t node
 *
 * Description: employs the floyd cycle detection algorithm
 *
 * Return: address to common node or NULL if no loop exists
 */
listint_t *find_common_node(listint_t *p, listint_t *q)
{
	while (p && q && p->next)
	{
		p = p->next->next;
		q = q->next;
		if (p == q)
			return (q);
	}
	return (NULL);
}

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: pointer to head of listint_t linked list
 *
 * Return: address of the node where the loop starts, or NULL if no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *p = head, *q = head;

	q = find_common_node(p, q);
	if (q == NULL)
		return (NULL);
	p = head;
	while (p != q)
	{
		p = p->next;
		q = q->next;
	}
	return (p);
}
