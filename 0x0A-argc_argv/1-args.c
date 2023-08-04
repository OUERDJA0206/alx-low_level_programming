#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - function
 * @argc: number of arguments passed
 * Return: Always 0
 * @argv: arguments passed here
 */
int main(int argc, char *argv[])
{
	int i;

	if (argc == 0)
	{
		printf("%d\n", argc - 1);
	}
	else
	{
		for (i = 0; *argv; i++, argv++)
			;
		printf("%d\n", i - 1);
	}
	return (0);
}
