#include "sort.h"

/**
 * swap_int - swap value of the variables in parameter with pointer.
 * @a: Pointer to the hight value.
 * @b: Pointer to the less value.
 */
void swap_int(int *a, int *b)
{
	int buffer = *a;
	*a = *b;
	*b = buffer;
}

/**
 * bubble_sort - Sorts an array of integers in ascending order
 * using the Bubble sort algorithm.
 *
 * @array: Pointer to the array of int to be sorted.
 * @size: Size of the given array.
*/
void bubble_sort(int *array, size_t size)
{
	size_t index, index_comp;

	if ((size >= 2) && (array))
	{
		for (index = 0; index < size; index++)
		{
			for (index_comp = 0; index_comp < size - 1; index_comp++)
			{
				if (array[index_comp] > array[index_comp + 1])
				{
					swap_int(&array[index_comp], &array[index_comp + 1]);
					print_array(array, size);
				}
			}

		}
	}
}
