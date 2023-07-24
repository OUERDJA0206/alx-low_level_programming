#include "main.h"
/**
* rev_string - reverses a string
* @s: string to be reversed
*/
void rev_string(char *s)
{
	int i = 0, j, len;
	char temp;

	while (s[i] != '\0')
	{
		i++;
	}
	len = i;
	for (j = 0; j < len / 2; j++)
	{
		temp = s[j];
		s[j] = s[len - j - 1];
		s[len - j - 1] = temp;
	}
}
