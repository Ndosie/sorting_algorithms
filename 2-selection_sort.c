#include "sort.h"

/**
 * selection_sort - sort array with selection algorithm
 * @array: array to sort
 * @size: size of array
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j;
	int temp, indx;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		indx = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[indx])
				indx = j;
		}
		if (indx != i)
		{
			temp = array[indx];
			array[indx] = array[i];
			array[i] = temp;
			print_array(array, size);
		}
	}
}
