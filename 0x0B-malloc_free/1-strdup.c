#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* _strdup - Entry point
*@str: string we need to duplicate
* Return: a pointer to the duplicated string or NULL
*/
char *_strdup(char *str)
{
	unsigned int i;
	int n;
	char *array = NULL;

	if (str == NULL)
	{
		return (NULL);
	}
	for (n = 0; str[n] != '\0'; n++)
	{
		;
	}
	array = (char *)malloc(sizeof(char) * (n + 1));
	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		array[i] = str[i];
	}
	array[i] = '\0';
	return (array);
}
