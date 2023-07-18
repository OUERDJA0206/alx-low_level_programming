#include "main.h"
/**
* print_last_digit - Prints the last digit of a number
* @c: The number to be treated
* Return: Value of the last digit of number
*/
int print_last_digit(int c)
{
	_putchar('0' + (c % 10));
	return (c % 10);
}
