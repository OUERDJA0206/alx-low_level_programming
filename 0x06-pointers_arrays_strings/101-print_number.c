#include "main.h"
/**
* print_number - prints number
* @n: the number to process
*/
void print_number(int n)
{
	unsigned int i;

	if (n >= 0 && n <= 9)
	{
		_putchar('0' + n);
		return;
	}
	if (n < 0)
	{
		i = -n;
		_putchar('-');
	}
	else
	{
		i = n;
	}
	if (i >= 10)
	{
		print_number(i / 10);
	}
	_putchar('0' + (i % 10));
}
