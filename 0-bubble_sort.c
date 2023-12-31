#include "sort.h"

/**
 * bubble_sort -Sorts with Bubble Sort
 * @array:Array to sort
 * @size: size of array
 */
void bubble_sort(int *array, size_t size)
{
	size_t index, counterIndex;

	for (counterIndex = 1; counterIndex != 0;)
	{
		for (index = 0, counterIndex = 0; index < size - 1; index++)
		{
			if (array[index] > array[index + 1])
			{
																									swap_array(array, size, index, index + 1);
				counterIndex++;
			}
		}
	}
}

/**
 * swap_array - common function to swap two array elements
 * @array: Array to manipulate
 * @s: Size of array
 * @a: index of first element
 * @b: index of second element
 */
void swap_array(int *array, size_t size, int a, int b)
{
	int t = array[a];

	array[a] = array[b];
	array[b] = t;
	print_array(array, size);
}
