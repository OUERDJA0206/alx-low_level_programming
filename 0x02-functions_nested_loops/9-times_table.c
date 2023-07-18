#include "main.h"
/**
* times_table - Prints the 9 times table, starting with 0
*
* Return: empty output
*/
void times_table(void)
{
	int i, j, k, u, d;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			k = i * j;
			if (k > 9)
			{
				u = k % 10;
				d = (k - u) / 10;
				_putchar(',');
				_putchar(' ');
				_putchar(d + '0');
				_putchar(u + '0');
			}
			else
			{
				if (j != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
				_putchar(k + '0');
			}
		}
		_putchar('\n');
	}
}
