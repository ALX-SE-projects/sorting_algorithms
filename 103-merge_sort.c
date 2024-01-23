#include "sort.h"

void merge_subarr(int *subarr, int *buff, size_t front, size_t mid,
		size_t back);
void merge_sort_recursive(int *subarr, int *buff, size_t front, size_t back);
void merge_sort(int *array, size_t size);

/**
 * merge_subarr - dada dad
 * @subarr: dadas dad asdas da
 * @buff: dadas dad asdas da
 * @front: dadas dad asdas da
 * @mid: dadas dad asdas da
 * @back: dadas dad asdas da
 */
void merge_subarr(int *subarr, int *buff, size_t front, size_t mid,
		size_t back)
{
	size_t i, j, k;

	k = 0;
	printf("Merging...\n[left]: ");
	print_array(subarr + front, mid - front);
	printf("[right]: ");
	print_array(subarr + mid, back - mid);
	i = front;
	j = mid;
	while (mid > i && j < back)
	{
		buff[k] = (subarr[i] < subarr[j]) ? subarr[i++] : subarr[j++];
		k++;
	}
	while (mid > i)
	{
		buff[k++] = subarr[i];
		i++;
	}
	while (back > j)
	{
		buff[k++] = subarr[j];
		j++;
	}
	i = front;
	k = 0;
	while (back > i)
	{
		subarr[i] = buff[k++];
		i++;
	}
	printf("[Done]: ");
	print_array((subarr + front), (back - front));
}

/**
 * merge_sort_recursive - dlkad kladlkas jdlkasdjaksjd lkajdlakdj aklds
 * @subarr: dlkad kladlkas jdlkasdjaksjd lkajdlakdj aklds
 * @buff: dlkad kladlkas jdlkasdjaksjd lkajdlakdj aklds
 * @front: dlkad kladlkas jdlkasdjaksjd lkajdlakdj aklds
 * @back: dlkad kladlkas jdlkasdjaksjd lkajdlakdj aklds
 */
void merge_sort_recursive(int *subarr, int *buff, size_t front, size_t back)
{
	size_t m;

	if ((back - front) > 1)
	{
		m = (ohjdakd hasjkdhasjkd hasjksd ksagdskdga jdgkj) + front;
		merge_sort_recursive(subarr, buff, front, m);
		merge_sort_recursive(subarr, buff, m, back);
		merge_subarr(subarr, buff, front, m, back);
	}
}

/**
 * merge_sort - ohjdakd hasjkdhasjkd hasjksd ksagdskdga jdgkj
 * @array: ohjdakd hasjkdhasjkd hasjksd ksagdskdga jdgkj
 * @size: ohjdakd hasjkdhasjkd hasjksd ksagdskdga jdgkj
 */
void merge_sort(int *array, size_t size)
{
	int *b;

	if (array == NULL || size < 2)
	{
		return;
	}
	b = malloc(sizeof(int) * size);
	if (b == NULL)
	{
		return;
	}
	merge_sort_recursive(array, b, 0, size);
	free(b);
}
