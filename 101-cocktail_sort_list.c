#include "sort.h"

void swap_node_ahead(listint_t **list, listint_t **tail, listint_t **shaker);
void swap_node_behind(listint_t **list, listint_t **tail, listint_t **shaker);
void cocktail_sort_list(listint_t **list);

/**
 * swap_node_ahead - ad sadsadas dsad asd
 * @list: dasd adsa sdsad d
 * @tail: adadasd asdas das
 * @shaker: asd ad adasd asd
 */
void swap_node_ahead(listint_t **list, listint_t **tail, listint_t **shaker)
{
	listint_t *t;

	t = (*shaker)->next;
	if ((*shaker)->prev != NULL)
	{
		(*shaker)->prev->next = t;
	}
	else
	{
		*list = t;
	}
	(*shaker)->next = t->next;
	t->prev = (*shaker)->prev;
	if (t->next != NULL)
	{
		(t->next)->prev = *shaker;
	}
	else
	{
		*tail = *shaker;
	}
	(*shaker)->prev = t;
	t->next = *shaker;
	*shaker = t;
}

/**
 * swap_node_behind - Swap a node in a listint_t doubly-linked
 *                    list of integers with the node behind it.
 * @list: A pointer to the head of a doubly-linked list of integers.
 * @tail: A pointer to the tail of the doubly-linked list.
 * @shaker: A pointer to the current swapping node of the cocktail shaker algo.
 */
void swap_node_behind(listint_t **list, listint_t **tail, listint_t **shaker)
{
	listint_t *t;

	t = (*shaker)->prev;
	if ((*shaker)->next != NULL)
	{
		(*shaker)->next->prev = t;
	}
	else
	{
		*tail = t;
	}
	(*shaker)->prev = t->prev;
	t->next = (*shaker)->next;
	if (t->prev != NULL)
	{
		t->prev->next = *shaker;
	}
	else
	{
		*list = *shaker;
	}
	(*shaker)->next = t;
	t->prev = *shaker;
	*shaker = t;
}

/**
 * cocktail_sort_list - dadas dasdas dad
 * @list: d adasd asdasda sdas
 */
void cocktail_sort_list(listint_t **list)
{
	listint_t *t, *s;
	bool shaken_not_stirred = false;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
	{
		return;
	}
	for (t = *list; t->next != NULL;)
	{
		t = t->next;
	}
	while (!shaken_not_stirred)
	{
		shaken_not_stirred = true;
		s = *list;
		while (s != t)
		{
			if (s->n > s->next->n)
			{
				swap_node_ahead(list, &t, &s);
				print_list((const listint_t *)*list);
				shaken_not_stirred = false;
			}
			s = s->next;
		}
		s = s->prev;
		while (s != *list)
		{
			if (s->n < s->prev->n)
			{
				swap_node_behind(list, &t, &s);
				print_list((const listint_t *)*list);
				shaken_not_stirred = false;
			}
			s = s->prev;
		}
	}
}
