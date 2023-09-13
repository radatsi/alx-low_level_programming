#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - prints each element of an array
 * @array: array to be iterated
 * @size: number of elements to print
 * @action: pointer to print in regular or hex
 * Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
