#include "sort.h"
/**
* selection_sort - function that sorts an array of integers in ascending
* order using the Selection sort algorithm
* @size: size of the array
* @array: list with numbers
*/
void selection_sort(int *array, size_t size)
{
	size_t x, i;
	int temp, pos_swap;

	if (array == NULL || size < 2)
		return;

	for (x = 0; x < size - 1; x++)
	{
		temp = x;
		for (i = x + 1; i < size; i++)
		{
			if (array[temp] > array[i])
				temp = i;
		}
		if ((int)temp != (int)x)
		{
			pos_swap = array[x];
			array[x] = array[temp];
			array[temp] = pos_swap;
			print_array(array, size);
		}
	}
}
