/*
 * File: 106-bitonic_sort.c
 * Auth: Brennan D Baraban
 */

#include "sort.h"

void swap_ints(int *a, int *b);
void bitonic_merge(int *array, size_t size, size_t start, size_t seq,
		char flow);
void bitonic_seq(int *array, size_t size, size_t start, size_t seq, char flow);
void bitonic_sort(int *array, size_t size);

/**
 * swap_ints - dja djasd kasdakd nakjdakh sdas
 * @a: dja djasd kasdakd nakjdakh sdas
 * @b: dja djasd kasdakd nakjdakh sdas
 */
void swap_ints(int *a, int *b)
{
	int t;

	t = *a;
	*a = *b;
	*b = t;
}

/**
 * bitonic_merge - kjfs hkdfhskdjfhsjdkf hjsd kfhjakls fhldsjak
 * @array: kjfs hkdfhskdjfhsjdkf hjsd kfhjakls fhldsjak
 * @size: kjfs hkdfhskdjfhsjdkf hjsd kfhjakls fhldsjak
 * @start: kjfs hkdfhskdjfhsjdkf hjsd kfhjakls fhldsjak
 * @seq: kjfs hkdfhskdjfhsjdkf hjsd kfhjakls fhldsjak
 * @flow: kjfs hkdfhskdjfhsjdkf hjsd kfhjakls fhldsjak
 */
void bitonic_merge(int *array, size_t size, size_t start, size_t seq,
		char flow)
{
	size_t i, j;

	j = seq / 2;
	if (seq > 1)
	{
		i = start;
		while ((start + j) > i)
		{
			if ((flow == UP && array[i] > array[i + j]) ||
			    (flow == DOWN && array[i] < array[i + j]))
			{
				swap_ints(array + i, array + i + j);
			}
			i++;
		}
		bitonic_merge(array, size, start, j, flow);
		bitonic_merge(array, size, start + j, j, flow);
	}
}

/**
 * bitonic_seq - j fahjkfhdasjkfh ajdkfhjadksfjk lasfjklasfj jkf
 * @array: j fahjkfhdasjkfh ajdkfhjadksfjk lasfjklasfj jkf
 * @size: j fahjkfhdasjkfh ajdkfhjadksfjk lasfjklasfj jkf
 * @start: j fahjkfhdasjkfh ajdkfhjadksfjk lasfjklasfj jkf
 * @seq: j fahjkfhdasjkfh ajdkfhjadksfjk lasfjklasfj jkf
 * @flow: j fahjkfhdasjkfh ajdkfhjadksfjk lasfjklasfj jkf
 */
void bitonic_seq(int *array, size_t size, size_t start, size_t seq, char flow)
{
	size_t c;
	char *str;

	str = (flow != UP) ? "DOWN" : "UP";
	c = seq / 2;
	if (seq > 1)
	{
		printf("%s [%lu/%lu] (%s):\n", "Merging", seq, size, str);
		print_array(array + start, seq);
		bitonic_seq(array, size, start, c, UP);
		bitonic_seq(array, size, start + c, c, DOWN);
		bitonic_merge(array, size, start, seq, flow);
		printf("%s [%lu/%lu] (%s):\n", "Result", seq, size, str);
		print_array(array + start, seq);
	}
}

/**
 * bitonic_sort - dfa dhkfhsadfg sadhhfdas hfkha
 * @array: dfa dhkfhsadfg sadhhfdas hfkha
 * @size: dfa dhkfhsadfg sadhhfdas hfkha
 */
void bitonic_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
	{
		return;
	}
	bitonic_seq(array, size, 0, size, UP);
}
