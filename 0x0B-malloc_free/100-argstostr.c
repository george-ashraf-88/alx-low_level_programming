#include "main.h"

/**
 * argstostr - Concats argv to new string
 *
 * @ac: Argument count
 * @av: Arguments
 *
 * Return: Returns a pointer to a new string, or NULL if it fails
 */

char *argstostr(int ac, char **av)
{
	int index, sumString;
	char *newString;

	sumString = 1;

	if (ac == 0 || av == NULL)
		return (0);
	for (index = 0; index < ac && av[index]; index++)
	{
		sumString += _strlen(av[index]);
	}
	newString = malloc((sumString * sizeof(char)) + ac);
	for (index = 0; index < ac && av[index]; index++)
	{
		newString = _strcat(newString, av[index]);
		newString = _strcat(newString, "\n");
	}
	if (newString == NULL)
		return (NULL);
	return (newString);
}
