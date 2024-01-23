#include "sort.h"

/**
 * swap_ints - dasdasdasd
 * @a: adsadasd
 * @b: dadasdsadd
 */
void swap_ints(int *a, int *b)
{
	int t;

	t = *a;
	*a = *b;
	*b = tmp;
}

/**
 * selection_sort - asdad adasd sd
 * @array: ada dasd
 * @size: dasd adad asd
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j;
	int *m;

	if (array == NULL || size < 2)
	{
		return;
	}
	for (i = 0; size - 1 > i; i++)
	{
		m = array + i;
		for (j = i + 1; j < size; j++)
		{
			m = (array[j] < *m) ? (array + j) : m;
		}
		if ((array + i) != m)
		{
			swap_ints((array + i), m);
			print_array(array, size);
		}
	}
}
