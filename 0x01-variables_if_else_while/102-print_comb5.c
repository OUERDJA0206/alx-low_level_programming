#include <stdio.h>
/**
  * main - Entry point
  *
  * Return: Always 0 (Success)
*/
int main(void)
{
	int a, b, c, d;

	for (a = 48; a <= 57; a++)
	{
		for (b = 48; b <= 57; b++)
		{
			d = b + 1;
			c = a;
			for (; c <= 57; c++)
			{
				for (; d <= 57; d++)
				{
					putchar(a);
					putchar(b);
					putchar(' ');
					putchar(c);
					putchar(d);
					if (a != 57 || c != 57 || b != 56 || d != 57)
					{
						putchar(',');
						putchar(' ');
					}
				}
				d = 48;
			}
		}
	}
	putchar('\n');
	return (0);
}
