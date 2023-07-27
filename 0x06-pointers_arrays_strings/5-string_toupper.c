#include "main.h"
/**
* string_toupper - uppercase all lower case letters in a string.
* @a: string to process.
* Return: a pointer.
*/
char *string_toupper(char *a)
{
	int i;

	for (i = 0; a[i] != '\0'; i++)
	{
		if (a[i] >= 'a' && a[i] <= 'z')
		{
			a[i] -= 32;
		}
	}
	a[i] = '\0';
	return (a);
}
