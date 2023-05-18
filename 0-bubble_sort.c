#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * bubble_sort - sorts an array
 * @array: the array to sort
 * @size: the size of the array
*/
void bubble_sort(int *array, size_t size)
{
	size_t pos = 0, sizeMax = size;
	int aux = 0, change = 0;

	while (1)
	{
		while (pos < sizeMax)
		{
			if (array[pos] > array[pos + 1])
			{
				aux = array[pos];
				array[pos] = array[pos + 1];
				array[pos + 1] = aux;
				sizeMax--;
				print_array(array, size);
				change = 1;
			}
			pos++;
		}
		pos = 0;
		if (change == 0)
			break;
		change = 0;
	}
}
