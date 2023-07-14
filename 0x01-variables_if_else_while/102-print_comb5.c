#include <stdio.h>
/**
  * main - Entry point
  *
  * Return: Always 0 (Success)
  */
int main(void)
{
	int i, j, k, l;

	for (i = 48; i <= 57; i++)
	{
		for (j = 48; j <= 57; j++)
		{
			l = j + 1;
			k = i;
			for (; k <= 57; k++)
			{
				for (; l <= 57; l++)
				{
					putchar(i);
					putchar(j);
					putchar(' ');
					putchar(k);
					putchar(l);
					if (i != 57 || j != 56 || k != 57 || l != 57)
					{
						putchar(',');
						putchar(' ');
					}
				}
				k = 48;
			}
		}
	}
	putchar('\n');
	return (0);
}
