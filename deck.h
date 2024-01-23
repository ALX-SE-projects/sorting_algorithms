#ifndef DECK_H
#define DECK_H

#include <stdlib.h>

/**
 * enum kind_e - dajksdaj jkdhjksdh ak daskj
 * @SPADE: dajksdaj jkdhjksdh ak daskj
 * @HEART: dajksdaj jkdhjksdh ak daskj
 * @CLUB: dajksdaj jkdhjksdh ak daskj
 * @DIAMOND: dajksdaj jkdhjksdh ak daskj
 */
typedef enum kind_e
{
	SPADE = 0,
	HEART,
	CLUB,
	DIAMOND
} kind_t;

/**
 * struct card_s - dajksdaj jkdhjksdh ak daskj
 *
 * @value: dajksdaj jkdhjksdh ak daskj
 * @kind: dajksdaj jkdhjksdh ak daskj
 */
typedef struct card_s
{
	const char *value;
	const kind_t kind;
} card_t;

/**
 * struct deck_node_s - dajksdaj jkdhjksdh ak daskj
 *
 * @card: dajksdaj jkdhjksdh ak daskj
 * @prev: dajksdaj jkdhjksdh ak daskj
 * @next: dajksdaj jkdhjksdh ak daskj
 */
typedef struct deck_node_s
{
	const card_t *card;
	struct deck_node_s *prev;
	struct deck_node_s *next;
} deck_node_t;

void sort_deck(deck_node_t **deck);

#endif /* DECK_H */
