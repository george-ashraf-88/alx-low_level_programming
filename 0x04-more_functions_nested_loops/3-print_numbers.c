#include "main.h"

int _putchar(char c);

/**
 * print_numbers - print 0-9
 * return: void
 */
void main(void)
{
	har c;

	for (c = '0'; c <= '9'; c++)
	{
		_putchar(c);
	}
	putchar('\n');
}

int _putchar(char c)
{
	return (write(1, &c, 1));
}
