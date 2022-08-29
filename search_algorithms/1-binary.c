#include  "search_algos.h"

/**
 * binary_search - searches an int value in a sorted array using binary search
 * @array: pointer to a ascending order sorted array
 * @size: array's size
 * @value: value to search for
 * Return: index where value is, otherwise -1.
 */
int binary_search(int *array, size_t size, int value)
{
	size_t low = 0;
	size_t high = size - 1;
	size_t mid;

	if (!array || !value || !size)
		return (-1);
	printf("Searching in array: ");
	print_array(array, size);

	while (low != high)
	{
		mid = (low + high) / 2;

		if (value == array[mid])
		{
			return (mid);
		}
		else if (value > array[mid])
		{
			printf("Searching in array: ");
			print_array(&array[mid + 1], high - mid);
			low = mid + 1;
		}
		else
		{
			printf("Searching in array: ");
			print_array(array, mid);
			high = mid - 1;
		}
	}
	return (-1);
}



/**
 * print_array - Prints an array of integers
 *
 * @array: The array to be printed
 * @size: Number of elements in @arrayi
 *
 * Return: void functions
 */
void print_array(const int *array, size_t size)
{
	size_t i;

	i = 0;
	while (array && i < size)
	{
		if (i > 0)
			printf(", ");
		printf("%d", array[i]);
		++i;
	}
	printf("\n");
}
