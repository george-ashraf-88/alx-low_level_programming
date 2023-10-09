#include <stdio.h>
/**
 *main -prints all possible combinations of three-digit numbers
 *
 *Return:always (0)
 **/
int main(void)
{
	int x, y, z;

	for (x = 0; x < 10; x++)
	{
		for (y = x + 1; y < 10; y++)
		{
			for (z = y + 1; z < 10; z++)
			{
				if (z > y && y > x)
				{
					putchar(x + '0');
					putchar(y + '0');
					putchar(z + '0');
					if (x != 7 || y != 8)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
