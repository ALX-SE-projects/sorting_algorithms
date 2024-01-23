#include "sort.h"

void swap_ints(int *a, int *b);
int lomuto_partition(int *array, size_t size, int left, int right);
void lomuto_sort(int *array, size_t size, int left, int right);
void quick_sort(int *array, size_t size);

/**
 * swap_ints - dadasd
 * @a: adsadada
 * @b: dasdasd
 */
void swap_ints(int *a, int *b)
{
	int t;

	t = *a;
	*a = *b;
	*b = t;
}

/**
 * lomuto_partition - werew rwer we
 * @array: rwerwerew ewrwe
 * @size: wr werw rewr
 * @left: ewrw erwe rwer wrw
 * @right: werweer weerwer ewr
 */
int lomuto_partition(int *array, size_t size, int left, int right)
{
	int *p, a, b;

	p = array + right;
	for (a = b = left; b < right; b++)
	{
		if (array[b] < *p)
		{
			if (a < b)
			{
				swap_ints((array + b), (array + a));
				print_array(array, size);
			}
			a++;
		}
	}
	if (*p < array[a])
	{
		swap_ints(array + a, p);
		print_array(array, size);
	}
	return (a);
}

/**
 * lomuto_sort - dada dadasda sd
 * @array: dsda dsada sdasda
 * @size: fsdfs fsf sf sfsdf s
 * @left: fsfsf sfsdfsfsfs
 * @right: dsfsfsf sdds fsdf
 */
void lomuto_sort(int *array, size_t size, int left, int right)
{
	int p;

	if ((right - left) > 0)
	{
		p = lomuto_partition(array, size, left, right);
		lomuto_sort(array, size, left, (p - 1));
		lomuto_sort(array, size, (p + 1), right);
	}
}

/**
 * quick_sort - adasdass dasdadsdad
 * @array: adasdadasdasd a
 * @size: daadasdasdas
 */
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
	{
		return;
	}
	lomuto_sort(array, size, 0, (size - 1));
}
