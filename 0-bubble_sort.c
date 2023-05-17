#include "sort.h"
/**
 * bubble_sort -  sorts an array of integers using Bubble sort algorithm
 * @array: array to sort
 * @size: size of array
*/
void bubble_sort(int *array, size_t size)
{
	size_t flag = 1, i = 0;

	if (!array || size <= 0)
		return;

	while (flag == 1)
	{
		flag = 0;
		for (i = 0; i < size; i++)
		{
			if (i != size - 1 && array[i] > array[i + 1])
			{
				swap(array, i);
				print_array(array, size);
				flag = 1;
			}
			if (flag == 0 && i == size - 1)
				return;
		}
	}
}

void swap(int *array, size_t i)
{
	int temp = 0;

	temp = array[i];
	array[i] = array[i + 1];
	array [i + 1] = temp;
}