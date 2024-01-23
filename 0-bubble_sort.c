#include "sort.h"

/**
 * swap_ints - dadasda
 * @b: adsasds
 * @a: dassdasd
 */
void swap_ints(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

/**
 * bubble_sort - adsadasd
 * @size: dadasda
 * @array: dadasdsa
 */
void bubble_sort(int *array, size_t size)
{
	size_t j, l = size;
	bool b = false;

	if (array == NULL || size < 2)
		return;
	while (!b)
	{
		b = true;
		for (j = 0; l - 1 > j; j++)
		{
			if (array[j + 1] < array[j])
			{
				swap_ints(array + j, array + j + 1);
				print_array(array, size);
				b = false;
			}
		}
		l--;
	}
}
