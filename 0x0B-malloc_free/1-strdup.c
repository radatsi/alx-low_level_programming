#include "main.h"
#include <stdlib.h>
/**
 * _strdup - points to new allocated space for duplicate string
 * @str: the string to be duplicated
 * Return: pointer to the duplicated string (newly allocated space)
 */
char *_strdup(char *str)
{
	char *new_space;
	int i = 1, a = 0;


	if (str == NULL)
		return (NULL);

	while (str[i])
	{
		i++;
	}
	new_space = malloc((sizeof(char) * i) + 1);

	if (new_space == NULL)
		return (NULL);

	while (a < i)
	{
		new_space[a] = str[a];
		a++;
	}

	return (new_space);
}
