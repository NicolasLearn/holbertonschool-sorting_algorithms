#include "sort.h"

/**
 * swap_int - swap value of the variables in parameter with pointer.
 * @a: Pointer to the min value.
 * @b: Pointer to the other value.
 */
void swap_int(int *a, int *b)
{
	int buffer = *a;
	*a = *b;
	*b = buffer;
}

/**
 * selection_sort - Sorts an array of integers in ascending order
 * using the selection sort algorithm.
 *
 * @array: Pointer to the array of int to be sorted.
 * @size: Size of the given array.
*/
void selection_sort(int *array, size_t size)
{
	size_t index, index_comp;
	int *min_value = NULL, change = 0;

	if ((size > 2) && (array))
	{
		for (index = 0; index < size; index++)
		{
			change = 0;
			min_value = &array[index];
			for (index_comp = index; index_comp < size; index_comp++)
			{
				if (array[index_comp] < *min_value)
				{
					min_value = &array[index_comp];
					change = 1;
				}
			}
			if (change)
			{
				swap_int(min_value, &array[index]);
				print_array(array, size);
			}
		}
	}
}

