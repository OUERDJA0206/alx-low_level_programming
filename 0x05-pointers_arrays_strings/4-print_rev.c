#include "main.h"
/**
* print_rev - function with 1 argument
* @s: 1st argument char type
*
* Description: function that prints a string in reverse
* Return: na
*/
void print_rev(char *s)
{
	int i, j, lenght;

	while (s[j] != '\0')
	{
		j++;
	}
	lenght = j;
	for (i = lenght - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
