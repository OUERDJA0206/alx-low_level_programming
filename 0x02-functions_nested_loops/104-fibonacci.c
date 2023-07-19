#include <stdio.h>
/**
* main - Prints the first 98 Fibonacci numbers, starting with
*        1 and 2, separated by a comma followed by a space.
*
* Return: Always 0.
*/
int main(void)
{
	int i;
	unsigned long F1 = 0, F2 = 1, NEXTF;
	unsigned long F1_h1, F1_h2, F2_h1, F2_h2;
	unsigned long h1, h2;

	for (i = 0; i < 92; i++)
	{
		NEXTF = F1 + F2;
		printf("%lu, ", NEXTF);
		F1 = F2;
		F2 = NEXTF;
	}
	F1_h1 = F1 / 10000000000;
	F2_h1 = F2 / 10000000000;
	F1_h2 = F1 % 10000000000;
	F2_h2 = F2 % 10000000000;
	for (i = 93; i < 99; i++)
	{
		h1 = F1_h1 + F2_h1;
		h2 = F1_h2 + F2_h2;
		if (F1_h2 + F2_h2 > 9999999999)
		{
			h1 += 1;
			h2 %= 10000000000;
		}
		printf("%lu%lu", h1, h2);
		if (i != 98)
			printf(", ");
		F1_h1 = F2_h1;
		F1_h2 = F2_h2;
		F2_h1 = h1;
		F2_h2 = h2;
	}
	printf("\n");
	return (0);
}

