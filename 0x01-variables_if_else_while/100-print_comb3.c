#include <stdio.h>
/**
 *main -prints all possible combinations of two-digit numbers
 *
 *Return:always (0)
 **/
int main(void)
{
	int x, y ,c;

	for (x = 0; x < 10; x++)
	{
		for (y = x + 1; y < 10; y++)
		{
			putchar(x + '0');
			putchar(y +'0');
			
			if ( x !=8 || y != 9)
				putchar(',');
				putchar(' ');
		}
	}

	putchar('\n');
	return(0);
}
