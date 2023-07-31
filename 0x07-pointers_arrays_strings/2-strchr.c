#include "main.h"
#include <stddef.h>
/**
* _strchr - returns a point to the first occurance of a character in a string.
* @s: string to search for the character in.
* @c: char to the search for.
* Return: pointer to char or else NULL.
*/
char *_strchr(char *s, char c)
{
	unsigned int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return ((s + i));
		}
		if (c == '\0')
		{
			return ((s + i));
		}
	}
	return (NULL);
}
