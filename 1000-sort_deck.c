#include "deck.h"

int _strcmp(const char *s1, const char *s2);
char get_value(deck_node_t *card);
void insertion_sort_deck_kind(deck_node_t **deck);
void insertion_sort_deck_value(deck_node_t **deck);
void sort_deck(deck_node_t **deck);

/**
 * _strcmp - jdkadkjak akjsdkjasdh kasjdhkasjd kab
 * @s1: jdkadkjak akjsdkjasdh kasjdhkasjd kab
 * @s2: jdkadkjak akjsdkjasdh kasjdhkasjd kab
 *
 * Return: jdkadkjak akjsdkjasdh kasjdhkasjd kab
 */
int _strcmp(const char *s1, const char *s2)
{
	while (*s1 && *s2 && *s2 == *s1)
	{
		s1++;
		s2++;
	}
	if (*s1 != *s2)
	{
		return (*s1 - *s2);
	}
	return (0);
}

/**
 * get_value - jdkadkjak akjsdkjasdh kasjdhkasjd kab
 * @card: jdkadkjak akjsdkjasdh kasjdhkasjd kab
 *
 * Return: jdkadkjak akjsdkjasdh kasjdhkasjd kab
 */
char get_value(deck_node_t *card)
{
	if (_strcmp(card->card->value, "Ace") == 0)
	{
		return (0);
	}
	else if (_strcmp(card->card->value, "1") == 0)
	{
		return (1);
	}
	else if (_strcmp(card->card->value, "2") == 0)
		return (2);
	else if (_strcmp(card->card->value, "3") == 0)
		return (3);
	else if (_strcmp(card->card->value, "4") == 0)
		return (4);
	else if (_strcmp(card->card->value, "5") == 0)
		return (5);
	else if (_strcmp(card->card->value, "6") == 0)
		return (6);
	else if (_strcmp(card->card->value, "7") == 0)
		return (7);
	else if (_strcmp(card->card->value, "8") == 0)
		return (8);
	else if (_strcmp(card->card->value, "9") == 0)
		return (9);
	else if (_strcmp(card->card->value, "10") == 0)
		return (10);
	else if (_strcmp(card->card->value, "Jack") == 0)
		return (11);
	else if (_strcmp(card->card->value, "Queen") == 0)
	{
		return (12);
	}
	return (13);
}

/**
 * insertion_sort_deck_kind - jdkadkjak akjsdkjasdh kasjdhkasjd kab
 * @deck: jdkadkjak akjsdkjasdh kasjdhkasjd kab
 */
void insertion_sort_deck_kind(deck_node_t **deck)
{
	deck_node_t *it, *in, *t;

	it = (*deck)->next;
	while (it != NULL)
	{
		in = it->prev;
		t = it->next;
		while (in != NULL && it->card->kind < in->card->kind)
		{
			in->next = it->next;
			if (it->next != NULL)
			{
				it->next->prev = in;
			}
			it->prev = in->prev;
			it->next = in;
			if (in->prev != NULL)
			{
				in->prev->next = it;
			}
			else
			{
				*deck = it;
			}
			in->prev = it;
			in = it->prev;
		}
		it = t;
	}
}

/**
 * insertion_sort_deck_value - jdkadkjak akjsdkjasdh kasjdhkasjd kab
 * @deck: jdkadkjak akjsdkjasdh kasjdhkasjd kab
 */
void insertion_sort_deck_value(deck_node_t **deck)
{
	deck_node_t *it, *in, *t;

	it = (*deck)->next;
	while (it != NULL)
	{
		t = it->next;
		in = it->prev;
		while (in != NULL &&
		       it->card->kind == in->card->kind &&
		       get_value(it) < get_value(in))
		{
			in->next = it->next;
			if (it->next != NULL)
			{
				it->next->prev = in;
			}
			it->prev = in->prev;
			it->next = in;
			if (in->prev != NULL)
			{
				in->prev->next = it;
			}
			else
			{
				*deck = it;
			}
			in->prev = it;
			in = it->prev;
		}
		it = t;
	}
}

/**
 * sort_deck - jdkadkjak akjsdkjasdh kasjdhkasjd kab
 * @deck: jdkadkjak akjsdkjasdh kasjdhkasjd kab
 */
void sort_deck(deck_node_t **deck)
{
	if (deck == NULL || *deck == NULL || (*deck)->next == NULL)
	{
		return;
	}
	insertion_sort_deck_kind(deck);
	insertion_sort_deck_value(deck);
}
