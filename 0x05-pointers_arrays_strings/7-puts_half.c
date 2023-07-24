#include "main.h"
/**
* puts_half - prints half of a string
* followed by a new line
* @str: string to be printed
*/
void puts_half(char *str)
{
	int i = 0, length_of_the_string;

	while (str[i] != '\0')
	{
		i++;
	}
	length_of_the_string = i;
	if (length_of_the_string % 2 == 0)
	{
		for (i = length_of_the_string / 2; i < length_of_the_string; i++)
		{
			_putchar(str[i]);
		}
	}
	else
	{
		for (i = (length_of_the_string - 1) / 2; i < length_of_the_string; i++)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
