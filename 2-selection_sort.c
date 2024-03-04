#include "sort.h"

/**
 * selection_sort - select min wrt to beginning and swap
 * @array: to be sorted
 * @size: length of array
 *
 * Return: void
 */

void selection_sort(int *array, size_t size)
{
	size_t i, j;
	int small, temp;

	for (j = 0; j < size - 1; j++)
	{
		small = j;
		for (i = j + 1; i < size; i++)
		{
			if (array[i] < array[small])
			{
				small = i;
			}
		}
		if (array[small] != array[j])
		{
			temp = array[j];
		    array[j] = array[small];
		    array[small] = temp;
		    print_array(array, size);
		}
	}
}
