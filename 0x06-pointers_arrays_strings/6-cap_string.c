#include "main.h"
/**
* specialCharacters - check if a char is a seperator.
* @a: the char to test.
* Return: 1 if seperator is found else 0
*/
int specialCharacters(char a)
{
	char scA[] = {'\t', '\n', ' ', ',', ';', '!',
		'.', '?', '\"', '(', ')', '{', '}'};

	for (int i = 0; scA[i] != '\0'; i++)
	{
		if (a == scA[i])
		{
			return (1);
		}
	}
	return (0);
}
/**
* cap_string - This function capitalizes all words of a string.
* @a: sring to be processed.
* Return: pointer to the modified string.
*/
char *cap_string(char *a)
{
	int specialchar = 1;

	for (int i = 0; a[i] != '\0'; i++)
	{
		if (specialchar == 1 && (a[i] >= 'a' && a[i] <= 'z'))
		{
			a[i] -= 32;
			specialchar = 0;
		}
		specialchar = specialCharacters(a[i]);
	}
	return (a);
}
