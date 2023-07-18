#include <stdio.h>
/**
* main - Prints first 50 Fibonacci numbers, starting with 1 and 2,
*        separated by a comma followed by a space.
*
* Return: Always 0.
*/
int main(void)
{
	int i;
	unsigned long F1 = 0, F2 = 1, NEXTF;

	for (i = 0; i < 50; i++)
	{
		NEXTF = F1 + F2;
		printf("%lu", NEXTF);
		F1 = F2;
		F2 = NEXTF;
		if (i == 49)
			printf("\n");
		else
			printf(", ");
	}
	return (0);
}
