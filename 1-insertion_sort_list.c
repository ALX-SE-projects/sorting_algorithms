#include "sort.h"

/**
 * swap_nodes - dadadsd
 * @h: dadasd
 * @n1: addasdad
 * @n2: dadadsad
 */
void swap_nodes(listint_t **h, listint_t **n1, listint_t *n2)
{
	(*n1)->next = n2->next;
	if (n2->next != NULL)
		n2->next->prev = *n1;
	n2->next = *n1;
	n2->prev = (*n1)->prev;
	if ((*n1)->prev != NULL)
	{
		(*n1)->prev->next = n2;
	}
	else
	{
		*h = n2;
	}
	(*n1)->prev = n2;
	*n1 = n2->prev;
}

/**
 * insertion_sort_list - asdasdasd
 * @list: dadasd
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *i, *ii, *t;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
	{
		return;
	}
	for (i = (*list)->next; i != NULL; i = t)
	{
		ii = i->prev;
		t = i->next;
		while (ii != NULL && ii->n > i->n)
		{
			swap_nodes(list, &ii, i);
			print_list((const listint_t *)*list);
		}
	}
}
