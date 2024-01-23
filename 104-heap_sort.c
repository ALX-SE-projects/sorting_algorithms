#include "sort.h"

void swap_ints(int *a, int *b);
void max_heapify(int *array, size_t size, size_t base, size_t root);
void heap_sort(int *array, size_t size);

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
 * max_heapify - lqe kqkwe kjqwhekjq ehjqwbehq kbekhx a dsa
 * @array: lqe kqkwe kjqwhekjq ehjqwbehq kbekhx a dsa
 * @size: lqe kqkwe kjqwhekjq ehjqwbehq kbekhx a dsa
 * @base: lqe kqkwe kjqwhekjq ehjqwbehq kbekhx a dsa
 * @root: lqe kqkwe kjqwhekjq ehjqwbehq kbekhx a dsa
 */
void max_heapify(int *array, size_t size, size_t base, size_t root)
{
	size_t le, ri, la;

	la = root;
	ri = 2 * root + 2;
	le = 2 * root + 1;
	if (base > le && array[le] > array[la])
	{
		la = le;
	}
	if (base > ri && array[ri] > array[la])
	{
		la = ri;
	}
	if (root != la)
	{
		swap_ints(array + root, array + la);
		print_array(array, size);
		max_heapify(array, size, base, la);
	}
}

/**
 * heap_sort - dakjd lakdklasjd klajdklasjd ksadjaakdj alkd
 * @array: dakjd lakdklasjd klajdklasjd ksadjaakdj alkd
 * @size: dakjd lakdklasjd klajdklasjd ksadjaakdj alkd
 */
void heap_sort(int *array, size_t size)
{
	int i;

	if (array == NULL || size < 2)
	{
		return;
	}
	i = (size / 2) - 1;
	while (i >= 0)
	{
		max_heapify(array, size, size, i);
		i--;
	}
	i = size - 1;
	while (i > 0)
	{
		swap_ints(array, array + i);
		print_array(array, size);
		max_heapify(array, size, i, 0);
		i--;
	}
}
