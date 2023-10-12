#include "main.h"

/**
 * main - prints the alphabet, in lowercase.
 *
 * Return: Always 0.
 */
void print_alphabet(void);
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
		_putcahr(x);
	_putchar('\n');
}
