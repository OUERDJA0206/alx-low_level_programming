#include "main.h"
/**
* rot13 - function that encodes a string using rot13.
* @a: string to encode
* Return: a pointer to sear
*/
char *rot13(char *a)
{
	int i;

	for (i = 0; a[i] != '\0'; i++)
	{
		while ((a[i] >= 'a' && a[i] <= 'm') || (a[i] >= 'A' && a[i] <= 'M'))
		{
			a[i] += 13;
			i++;
		}
		if ((a[i] >= 'n' && a[i] <= 'z') || (a[i] >= 'N' && a[i] <= 'Z'))
			a[i] -= 13;
	}
	return (a);
}
