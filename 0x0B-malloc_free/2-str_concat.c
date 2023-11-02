#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 *str_concat - duplicate to new memory space location
 *@s1: char
 *@s2: char
 *Return: 0
 */

char *str_concat(char *s1, char *s2)
{

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	length1 = strlen(s1);
	length2 = strlen(s2);

	char *concatenated = (char *)malloc((length1 + length2 + 1) * sizeof(char));

	if (concatenated == NULL)
	{
		return (NULL);
	}

	strcpy(concatenated, s1);
	strcat(concatenated, s2);

	return (concatenated);
}
