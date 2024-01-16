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
 * partition - Sort the array using the last value as the pivot.
 * Value < pivot > value.
 *
 * @array: Pointeur to the array to be sorting.
 * @start: Index of the begining array.
 * @end: Index of the end array.
 * @size: Size of the array.
 *
 * Return: Index of the pivot.
*/
int partition(int array[], int start, int end, const size_t size)
{
    int pivot, i, j;

	i = start - 1;
	pivot = array[end];
    for (j = start; j <= end - 1; j++)
	{
        if (array[j] < pivot)
        {
			i++;
			if (i != j)
			{
				swap_int(&array[i], &array[j]);
				print_array(array, size);
			}
    	}
	}
	if ((i + 1) != end)
	{
		swap_int(&array[i + 1], &array[end]);
		print_array(array, size);
	}
    return (i + 1);
}

/**
 * quicksort_recursion - Gets the index of the pivot, and call itself with the
 * values less and greater than the pivot, recursively until failure.
 *
 * @array: Pointeur to the array to be sorting.
 * @start: Index of the begining array.
 * @end: Index of the end array.
 * @size: Size of the array.
*/
void quicksort_recursion(int *array, int start, int end, const size_t size)
{
	int pivot;

    if (start < end)
	{
        pivot = partition(array, start, end, size);
        quicksort_recursion(array, start, pivot - 1, size);
        quicksort_recursion(array, pivot + 1, end, size);
    }
}

/**
 * quick_sort - Sorts an array of integers in ascending order using the
 * Quick sort algorithm.
 *
 * @array: Pointeur to the array to be sorting.
 * @size: Size of the array.
*/
void quick_sort(int *array, size_t size)
{
	int end_index;

	if ((array) && (size > 2))
	{
		end_index = size - 1;
		quicksort_recursion(array, 0, end_index, size);
	}
}
