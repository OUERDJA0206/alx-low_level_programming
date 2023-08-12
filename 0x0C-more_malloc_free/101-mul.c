#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* is_number - checks if a string is a positive number
* @s: the string to check
* Return: 1 if the string is a positive number, 0 otherwise
*/
int is_number(char *s)
{
	if (!s || *s == '\0')
		return (0);
	while (*s)
	{
		if (*s < '0' || *s > '9')
			return (0);
		s++;
	}
	return (1);
}
/**
* print_error - Prints an error message and exits.
*/
void print_error(void)
{
	char *error = "Error\n";

	while (*error)
	{
		_putchar(*error);
		error++;
	}
	exit(98);
}
/**
* print_num - Prints a number using putchar.
* @n: The number to print.
*/
void print_num(unsigned long n)
{
	if (n / 10)
		print_num(n / 10);
	_putchar((n % 10) + '0');
}
/**
* main - multiplies two positive numbers passed as arguments
* @argc: count of arguments
* @argv: array of arguments
* Return: 0 on success, 98 on error
*/
int main(int argc, char *argv[])
{
	unsigned long num1, num2, result;

	if (argc != 3)
		print_error();
	if (!is_number(argv[1]) || !is_number(argv[2]))
		print_error();
	num1 = atol(argv[1]);
	num2 = atol(argv[2]);
	result = num1 * num2;
	print_num(result);
	_putchar('\0');
	return (0);
}
