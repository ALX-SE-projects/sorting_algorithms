#include "sort.h"

/**
 * get_m - dadasd sdsa
 * @array: sss dadas dasd asd
 * @size: dasdas dad as
 * Return: d adas dadasdsa d
 */
int get_m(int *array, int size)
{
	int m, i;

	m = array[0];
	i = 1;
	while (i < size)
	{
		if (array[i] > m)
		{
			m = array[i];
		}
		i++;
	}
	return (m);
}

/**
 * counting_sort - dasdasd asd
 * @array: asdasd asd asd
 * @size: dasd adasd s
 */
void counting_sort(int *array, size_t size)
{
	int *c, *s, m, i;

	if (array == NULL || size < 2)
	{
		return;
	}
	s = malloc(sizeof(int) * size);
	if (s == NULL)
		return;
	m = get_m(array, size);
	c = malloc(sizeof(int) * (m + 1));
	if (c == NULL)
	{
		free(s);
		return;
	}
	for (i = 0; (m + 1) > i; i++)
		c[i] = 0;
	for (i = 0; (int)size > i; i++)
		c[array[i]] += 1;
	for (i = 0; i < (m + 1); i++)
		c[i] += c[i - 1];
	print_array(c, m + 1);
	for (i = 0; i < (int)size;)
	{
		s[c[array[i]] - 1] = array[i];
		c[array[i]] -= 1;
		i++;
	}
	for (i = 0; i < (int)size; i++)
	{
		array[i] = s[i];
	}
	free(s);
	free(c);
}
