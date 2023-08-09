#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* str_concat - Entry point
*@s1: string 1
*@s2: string 2
* Return: pointer should point to a newly allocated space in memory or NULL
*/
char *str_concat(char *s1, char *s2)
{
	unsigned int i, j;
	unsigned int n1 = 0, n2 = 0;
	char *array;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[n1] != '\0')
		n1++;
	while (s2[n2] != '\0')
		n2++;
	array = (char *)malloc(sizeof(char) * (n1 + n2 + 1));
	if (array == NULL)
		return (NULL);
	for (i = 0; i < n1; i++)
		array[i] = s1[i];
	for (j = 0; j < n2; j++)
		array[i + j] = s2[j];
	array[j + i] = '\0';
	return (array);
}
