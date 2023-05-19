#include "sort.h"

/**
 * partition - does the lomuto partition
 * @array: array to be partitioned
 * @start: start of the array
 * @end: end of the array
 * @size: size of the array
 * Return: the pivot
 */
int partition(int *array, int start, int end, size_t size)
{
	int pivot = array[end];
	int greater = (start - 1);
	int i, temp;

	for (i = start; i < end; i++)
	{
		if (array[i] <= pivot)
		{
			greater++;
			if (greater < i)
			{
				temp = array[greater];
				array[greater] = array[i];
				array[i] = temp;
				print_array(array, size);
			}
		}
	}
	if (array[end] < array[greater + 1])
	{
		temp = array[greater + 1];
		array[greater + 1] = array[end];
		array[end] = temp;
		print_array(array, size);
	}
	return (greater + 1);
}

/**
 * sort_recursion - recursive function to perform quicksort
 * @array: array to be sorted
 * @start: start of the array
 * @end: end of the array
 * @size: size of the array
 */
void sort_recursion(int *array, int start, int end, size_t size)
{
	int pivot = 0;

	if (start < end)
	{
		pivot = partition(array, start, end, size);
		sort_recursion(array, start, pivot - 1, size);
		sort_recursion(array, pivot + 1, end, size);
	}
}

/**
 * quick_sort - sorts an array using quicksort algorithm
 * @array: array to be sorted
 * @size: size of array
 */
void quick_sort(int *array, size_t size)
{
	sort_recursion(array, 0, size - 1, size);
}
