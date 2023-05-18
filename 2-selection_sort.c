#include "sort.h"

/**
 * selection_sort - sorts an array of integers using selection sort
 * @array: the array to sort
 * @size: the size of the array
*/
void selection_sort(int *array, size_t size)
{
	size_t pos = 0, len = 0;
	int aux = 0, minNum = 0;

	if (array == NULL || size <= 1)
		return;
	while (len < size)
	{
		pos = len;
		minNum = pos;
		while (pos < size)
		{
			if (array[pos] < array[minNum])
				minNum = pos;
			pos++;
		}
		if (array[len] != array[minNum])
		{
			aux = array[len];
			array[len] = array[minNum];
			array[minNum] = aux;
			print_array(array, size);
		}
		len++;
	}
}
