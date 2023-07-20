#include "main.h"
/**
* print_diagonal - printing lines diagonal
* @n: input variable
*
* Return: void
*/
void print_diagonal(int n)
{
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
	_putchar('\n');
}
