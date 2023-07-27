#include "main.h"
/**
* cap_string - This function capitalizes all words of a string.
* @a: sring to be processed.
* Return: pointer to the modified string.
*/
char *cap_string(char *a)
{
	int i;

	for (i = 0; a[i] != '\0'; i++)
	{
		if ((a[i] == '\t' || a[i] == '\n' || a[i] == ' ' || a[i] == ',' || a[i] == ';' || a[i] == '!' || a[i] == '.' || a[i] == '?' || a[i] == '\"' || a[i] == '(' || a[i] == ')' || a[i] == '{' || a[i] == ']') && (a[i + 1] <= 'z' && a[i + 1] >= 'a'))
		{
			a[i + 1] -= 32;
		}
	}
	return (a);
}
