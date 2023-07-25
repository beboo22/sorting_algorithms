#include "sort.h"
/**
 * partition - make the left less than pivot and the right greater
 * @array: array to be sorted
 * @lo: fist index
 * @hi: last index
 * @size: size of the array
 * Return: pivot index of the array
 */
int partition(int *array, int lo, int hi, size_t size)
{
	int pivot, i, j;

	i = lo - 1;
	pivot = array[hi];
	for (j = lo; j < hi; j++)
	{
		if (array[j] < pivot)
		{
			i++;
			if (array[i] != array[j])
			{
				swap(&array[i], &array[j]);
				print_array(array, size);
			}
		}
	}
	if (array[i + 1] != array[hi])
	{
		swap(&array[i + 1], &array[hi]);
		print_array(array, size);
	}
	return (i + 1);
}
/**
 * quick_sort_helper - recursion on the array and sort
 * @array: array to be sorted
 * @lo: first index
 * @hi: last index
 * @size: size of the array
 */
void quick_sort_helper(int *array, int lo, int hi, size_t size)
{
	int part;

	if (lo < hi)
	{
		part = partition(array, lo, hi, size);
		quick_sort_helper(array, lo, part - 1, size);
		quick_sort_helper(array, part + 1, hi, size);
	}
}
/**
 * quick_sort - quick sort algorithm
 * @array: array that will be sorted
 * @size: size of the array
 */
void quick_sort(int *array, size_t size)
{
	quick_sort_helper(array, 0, size - 1, size);
}

/**
 * swap - Swaps the values of two integers using pointers.
 * @x: Pointer to the first integer.
 * @y: Pointer to the second integer.
 */
void swap(int *x, int *y)
{
	int tmp = *x;

	*x = *y;
	*y = tmp;
}
