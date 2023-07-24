#include "main.h"
/**
* _puts - function with one argument
* @str: one char type argument
* Description: print a string follow by a new line to stdout
* Return: none
*/
void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str);
		strr++;
	}
	_putchar('\n');
}
