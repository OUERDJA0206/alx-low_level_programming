#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
* string_nconcat - concatenates two strings up to n bytes
* @s1: the first string
* @s2: the second string
* @n: the maximum number of bytes to use from s2
* Return: a pointer to the newly allocated space in memory,
* containing s1, followed by the first n bytes of s2, and null terminated
* if the function fails, it returns NUL
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1, len2, i, j;
	char *new_str;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";
	len1 = strlen(s1);
	len2 = strlen(s2);
	if (n >= len2)
		n = len2;
	new_str = malloc(len1 + n + 1);
	if (!new_str)
		return (NULL);
	for (i = 0; i < len1; i++)
		new_str[i] = s1[i];
	for (j = 0; j < n; j++)
		new_str[i + j] = s2[j];
	new_str[i + j] = '\0';
	return (new_str);
}
