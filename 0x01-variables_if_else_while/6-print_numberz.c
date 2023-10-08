#include <stdio.h>

/**
 *main - prints all single digit numbers of base 10 starting from 0
 *des.
 *Return: always (0)
 */
int main(void)
{
	int x;

	for (x=0; x < 10; x++)
	{
		putchar("%d", x);
	}
	putchar("\n");

	return (0);
}
