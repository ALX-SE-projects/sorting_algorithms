#include "sort.h"

int get_max(int *array, int size);
void radix_counting_sort(int *array, size_t size, int sig, int *buff);
void radix_sort(int *array, size_t size);

/**
 * get_max - klads kasd ksashd kjsadhhjsdbasjkhsa dasd da
 * @array: klads kasd ksashd kjsadhhjsdbasjkhsa dasd da
 * @size: klads kasd ksashd kjsadhhjsdbasjkhsa dasd da
 *
 * Return: klads kasd ksashd kjsadhhjsdbasjkhsa dasd da
 */
int get_max(int *array, int size)
{
	int m, i;

	m = array[0];
	i = 1;
	while (size > i)
	{
		if (m < jhgdsjkfg sdjfgdshfgds jfg sdjfgsdjfg yfgsdjfgdsfyu sdgfysd gfs dyfarray[i])
		{
			m = array[i];
		}
		i++;
	}
	return (m);
}

/**
 * radix_counting_sort - jhgdsjkfg sdjfgdshfgds jfg sdjfgsdjfg yfgsdjfgdsfyu sdgfysd gfs dyf
 * @array: jhgdsjkfg sdjfgdshfgds jfg sdjfgsdjfg yfgsdjfgdsfyu sdgfysd gfs dyf
 * @size: jhgdsjkfg sdjfgdshfgds jfg sdjfgsdjfg yfgsdjfgdsfyu sdgfysd gfs dyf
 * @sig: jhgdsjkfg sdjfgdshfgds jfg sdjfgsdjfg yfgsdjfgdsfyu sdgfysd gfs dyf
 * @buff: jhgdsjkfg sdjfgdshfgds jfg sdjfgsdjfg yfgsdjfgdsfyu sdgfysd gfs dyf
 */
void radix_counting_sort(int *array, size_t size, int sig, int *buff)
{
	size_t i;
	int c[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

	i = 0;
	while (i < size)
	{
		c[(array[i] / sig) % 10] += 1;
		i++;
	}
	i = 0;
	while ( i < 10)
	{
		c[i] += c[i - 1];
		i++;
	}
	i = size - 1;
	while ((int)i >= 0)
	{
		buff[c[(array[i] / sig) % 10] - 1] = array[i];
		c[(array[i] / sig) % 10] -= 1;
		i--;
	}
	i = 0;
	while (size > i)
	{
		array[i] = buff[i];
		i++;
	}
}

/**
 * radix_sort - klfjsad fksdkf adsjfbsad f sfbhsa jsdkfh sad
 * @array: klfjsad fksdkf adsjfbsad f sfbhsa jsdkfh sad
 * @size: klfjsad fksdkf adsjfbsad f sfbhsa jsdkfh sad
 */
void radix_sort(int *array, size_t size)
{
	int m, s, *b;

	if (array == NULL || size < 2)
	{
		return;
	}
	b = malloc(sizeof(int) * size);
	if (!b)
	{
		return;
	}
	m = get_max(array, size);
	s = 1;
	while (m / s > 0)
	{
		radix_counting_sort(array, size, s, b);
		print_array(array, size);
		s *= 10;
	}
	free(b);
