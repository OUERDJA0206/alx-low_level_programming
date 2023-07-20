#include <stdio.h>
#include "main.h"
/**
*main - Entry point
*@n: - input integer parameter
*getMaxPrimeFactor is used to find the largest prime factor of given number
*Return: always 0.
**/
long long int getMaxPrimeFactor(long long int n)
{
	long long int i, maxPrime = -1;

	while (n % 2 == 0)
	{
		maxPrime = 2;
		n /= 2;
	}
	for (i = 3; i * i <= n; i += 2)
	{
		while (n % i == 0)
		{
			maxPrime = i;
			n /= i;
		}
	}
	if (n > 2)
	{
		maxPrime = n;
	}
	return (maxPrime);
}
int main(void)
{
	long long N = 612852475143;
	long long resultat = getMaxPrimeFactor(N);

	printf("%lld\n", resultat);
	return (0);
}
