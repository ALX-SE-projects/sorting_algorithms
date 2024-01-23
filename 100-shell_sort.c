#include "sort.h"

/**
 * swap_ints - dada dsad
 * @a: dsadadasd sadad
 * @b: adsad adasdas
 */
void swap_ints(int *a, int *b)
{
	int t;

	t = *a;
	*a = *b;
	*b = t;
}

/**
 * shell_sort - dasd asdasd adsa
 * @array: dasd assda dasd
 * @size: dadad adsasd asd
 */
void shell_sort(int *array, size_t size)
{
	size_t g, j;
	size_t i;

	if (array == NULL || size < 2)
	{
		return;
	}
	g = 1;
	while ((size / 3) > g)
	{
		g = 1 + g * 3;
	}
	while (g >= 1)
	{
		for (i = g; i < size; i++)
		{
			j = i;
			while (j >= g && array[j - g] > array[j])
			{
				swap_ints(j + array, (j - g) + array);
				j = j - g;
			}
		}
		print_array(array, size);
		g = g / 3;
	}
}
