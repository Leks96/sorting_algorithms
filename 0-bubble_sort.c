#include "sort.h"
/**
* bubble_sort - sort array lements from min to max value
* @array: array
* @size: array size
*/
void bubble_sort(int *array, size_t size)
{
	size_t x, i;
	int temp = 0;

	if (size < 2 || array == NULL)
		return;

	for (x = 0; x < size - 1; x++)
	{
		for (i = 0; i < size - x - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				temp = array[i];
				array[i] = array[i + 1];
				array[i +1] = temp;
				print_array(array, size);
			}
		}
	}
}
