#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * _strdup - duplicate to new memory space location
 * @str: char
 * Return: 0
 */

char *_strdup(char *str)
{
	char *a;
	int i, y = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	i = 0;

	while (str[i] != '\0')

		i++;

	a = malloc(sizeof(char) * (i + 1));

	if (a == NULL)

		return (NULL);

	for (y = 0; str[y]; y++)

		a[y] = str[y];

	return (aaa);
}
