#include "search_algos.h"

/**
  * binary_search - Searches for a value in a sorted array of integers using binary search.
  * @array: A pointer to the first element of the array to search.
  * @size: The number of elements in the array.
  * @value: The value to search for.
  * solocode
  * Return: If the value is not present or the array is NULL, -1.
  * Otherwise, the index where the value is located.
  * Description: Prints the [sub]array being searched after each change.
  */
int binary_search(int *array, size_t size, int value)
{
	size_t sol, left, right;

	if (array == NULL)
		return (-1);

	for (left = 0, right = size - 1; right >= left;)
	{
		printf("Searching in array: ");
		for (sol = left; sol < right; sol++)
			printf("%d, ", array[sol]);
		printf("%d\n", array[sol]);

		sol = left + (right - left) / 2;
		if (array[sol] == value)
			return (sol);
		if (array[i] > value)
			right = sol - 1;
		else
			left = sol + 1;
	}

	return (-1);
}
