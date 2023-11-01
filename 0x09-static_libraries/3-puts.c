#include "main.h"
#include <stdio.h>

/**
 * _puts - Escribir un texto
 *
 * @str: This is my entry
 *
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
	_putchar(str[i]);
	i++;
	}
	_putchar('\n');
}
