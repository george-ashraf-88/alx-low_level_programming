#include "main.h"

/**
 * print_alphabet - prints the alphabet 10 times, in lowercase.
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
	char x, y;

	for (y = '1' ; y <= '10'; y++)
	{
		for (x = 'a'; x <= 'z'; x++)
			_putchar(x);

		_putchar('\n');
	}
}
