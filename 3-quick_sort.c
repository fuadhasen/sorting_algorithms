#include "sort.h"

/**
 * quick_sort - sort using Lomuto algortihm principle
 * @array: the array to be sorted
 * @size: size of the array
 *
 * Return: void
 */

void quick_sort(int *array, size_t size)
{
	int start = 0;
	int end = size - 1;

	recursive_call(array, start, end, size);
}

/**
 * recursive_call - function to call the partition recursively
 * @array: obj to be sorted
 * @start: start of the array
 * @end: end of the array
 * @size: entire size of the array
 *
 * Return: void
 */

void recursive_call(int *array, int start, int end, size_t size)
{
	size_t pivot;

	if (end <= start)
		return;

	pivot = partition(array, start, end, size);
	recursive_call(array, start, pivot - 1, size);
	recursive_call(array, pivot + 1, end, size);
}

/**
 * partition - back bone of the quick sort
 * divid the array till one element is left
 * @array: object to be sorted
 * @start: start of the array
 * @end: end of the array
 * @size: size of the array
 *
 * Return: void
 */

int partition(int *array, int start, int end, size_t size)
{
	int i = start - 1, j, temp;
	int pivot = array[end];

	for (j = start; j < end; j++)
	{
		if (array[j] < pivot)
		{
			i++;
			if (i != j)
			{
				temp = array[j];
				array[j] = array[i];
				array[i] = temp;
				print_array(array, size);
			}
		}
	}
	i++;
	if (i != end)
	{
		temp = array[i];
		array[i] = array[end];
		array[end] = temp;
		print_array(array, size);
	}
	return (i);
}
