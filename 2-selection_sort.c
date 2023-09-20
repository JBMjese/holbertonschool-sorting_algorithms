#include "sort.h"

/**
 * swap_array - Common function to swap two elements in an array
 * @array: The array to manipulate
 * @size: The size of the array
 * @a: Index of the first element to swap
 * @b: Index of the second element to swap
 */
void swap_array(int *array, size_t size, int a, int b)
{
	int temp = array[a];

	array[a] = array[b];
	array[b] = temp;
	print_array(array, size);
}

/**
 * selection_sort - Sorts an array using the Selection Sort algorithm
 * @array: The array to sort
 * @size: The size of the array
 */
void selection_sort(int *array, size_t size)
{
	int min, index, counterIndex;

	for (counterIndex = 0; counterIndex < (int)size - 1; counterIndex++)
	{
		for (index = min = counterIndex; index < (int)size; index++)
		{
			if (array[min] > array[index])
			min = index;
		}
		if (counterIndex != min)
			swap_array(array, size, counterIndex, min);
	}
}
