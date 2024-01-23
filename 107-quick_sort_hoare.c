#include "sort.h"

void swap_ints(int *a, int *b);
int hoare_partition(int *array, size_t size, int left, int right);
void hoare_sort(int *array, size_t size, int left, int right);
void quick_sort_hoare(int *array, size_t size);

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
 * hoare_partition - jdffsf fjsf kljsdhfkljsa fklsad fdjkfds
 * @array: jdffsf fjsf kljsdhfkljsa fklsad fdjkfds
 * @size: jdffsf fjsf kljsdhfkljsa fklsad fdjkfds
 * @left: jdffsf fjsf kljsdhfkljsa fklsad fdjkfds
 * @right: jdffsf fjsf kljsdhfkljsa fklsad fdjkfds
 * Return: jdffsf fjsf kljsdhfkljsa fklsad fdjkfds
 */
int hoare_partition(int *array, size_t size, int left, int right)
{
	int p, a, b;

	p = array[right];
	a = left - 1;
	b = right + 1;
	while ( a < b)
	{
		do {
			a++;
		} while (p > array[a]);
		do {
			b--;
		} while (p < array[b]);
		if (a < b)
		{
			swap_ints(array + a, array + b);
			print_array(array, size);
		}
	}
	return (a);
}

/**
 * hoare_sort - jkfasdh dfhakjfhsa fjkdahfj asdhfhas fasudf
 * @array: jkfasdh dfhakjfhsa fjkdahfj asdhfhas fasudf
 * @size: jkfasdh dfhakjfhsa fjkdahfj asdhfhas fasudf
 * @left: jkfasdh dfhakjfhsa fjkdahfj asdhfhas fasudf
 * @right: jkfasdh dfhakjfhsa fjkdahfj asdhfhas fasudf
 */
void hoare_sort(int *array, size_t size, int left, int right)
{
	int p;

	if ((right - left) > 0)
	{
		p = hoare_partition(array, size, left, right);
		hoare_sort(array, size, left, (p - 1));
		hoare_sort(array, size, p, right);
	}
}

/**
 * quick_sort_hoare - kdaflj hlfakfhlad falfjklad sfd
 * @array: kdaflj hlfakfhlad falfjklad sfd
 * @size: kdaflj hlfakfhlad falfjklad sfd
 */
void quick_sort_hoare(int *array, size_t size)
{
	if (array == NULL || size < 2)
	{
		return;
	}
	hoare_sort(array, size, 0, (size - 1));
}
