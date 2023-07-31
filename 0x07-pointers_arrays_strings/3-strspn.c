#include "main.h"
#include <stdbool.h>
/**
* _strspn - function  calculates  the  length (in bytes) of the initial
* segment of s which consists entirely of bytes in accept.
* @s: string to search in.
* @accept: bytes in which to search for.
* Return: the number (U_INT) of bytes matching accept.
*/
unsigned int _strspn(char *s, char *accept)
{
	int n = 0;
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		bool found_match = false;

		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				found_match = true;
				break;
			}
		}
		if (!(found_match))
		{
			break;
		}
		else
		{
			n++;
		}
	}
	return (n);
}
