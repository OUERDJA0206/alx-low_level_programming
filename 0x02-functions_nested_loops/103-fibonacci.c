#include <stdio.h>
/**
* main - Prints the sum of even-valued Fibonacci sequence
*        terms not exceeding 4000000.
*
* Return: Always 0.
*/
int main(void)
{
	float sum;
	unsigned long F1 = 0, F2 = 1, NEXTF;
	int i;

	for (i = 0; i < 50; i++)
	{
		NEXTF = F1 + F2;
		if (NEXTF > 4000000)
			break;
		if ((NEXTF % 2) == 0)
			sum += NEXTF;
		F1 = F2;
		F2 = NEXTF;
	}
	printf("%.f\n", sum);
	return	(0);
}
