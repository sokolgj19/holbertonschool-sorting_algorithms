#include "sort.h"
#include <stddef.h>

/**
 * bubble_sort - Sorts an array of integers in ascending order
 *               using the Bubble sort algorithm
 * @array: Pointer to the array to sort
 * @size: Number of elements in the array
 *
 * Description: Prints the array after each swap
 */
void bubble_sort(int *array, size_t size)
{
	int i, j, tmp, swapped;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i < (int)size - 1; i++)
	{
		swapped = 0;
		for (j = 0; j < (int)size - 1 - i; j++)
		{
			if (array[j] > array[j + 1])
			{
				tmp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = tmp;

				print_array(array, size);
				swapped = 1;
			}
		}
		if (swapped == 0)
			break;
	}
}
