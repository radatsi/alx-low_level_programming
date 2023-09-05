#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - creates and initializes an array of chars
 * @size: size of the array or string to be created
 * @c: initializes the array
 * Return: a pointer to the array OR NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	if (size == 0)
		return (NULL);

	str = malloc(size * sizeof(char));

	if (str == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		str[i] = c;
	}

	return (str);
}
