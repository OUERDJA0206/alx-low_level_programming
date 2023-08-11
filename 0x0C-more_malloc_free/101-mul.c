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
* main - multiplies two positive numbers passed as arguments
* @argc: count of arguments
* @argv: array of arguments
* Return: 0 on success, 98 on error
*/
int main(int argc, char *argv[])
{
	unsigned long num1, num2, result;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	if (!is_number(argv[1]) || !is_number(argv[2]))
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atol(argv[1]);
	num2 = atol(argv[2]);
	result = num1 * num2;
	printf("%lu\n", result);
	return (0);
}
