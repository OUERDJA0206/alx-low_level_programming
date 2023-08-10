#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
* count_words - splits a string into words
* @str: input string to split
* Return: pointer to new string
*/
int count_words(char *str)
{
	int count = 0, i = 0;

	while (str[i])
	{
		while (str[i] && (str[i] == ' ' || str[i] == '\t'))
			i++;
		if (str[i] && (str[i] != ' ' && str[i] != '\t'))
		{
			count++;
			while (str[i] && (str[i] != ' ' && str[i] != '\t'))
				i++;
		}
	}
	return (count);
}
/**
* strtow - splits a string into words
* @str: input string to split
* Return: pointer to new string
*/
char **strtow(char *str)
{
	int i = 0, j = 0, len;
	int words;
	char **result = NULL;

	if (!str || !*str)
		return (NULL);
	words = count_words(str);
	result = (char **)malloc((words + 1) * sizeof(char *));
	if (!result)
	{
		return (NULL);
	}
	while (*str)
	{
		while (*str && (*str == ' ' || *str == '\t'))
			str++;
		if (*str)
		{
			len = 0;
			while (str[len] && (str[len] != ' ' && str[len] != '\t'))
				len++;
			result[j] = (char *)malloc((len + 1) * sizeof(char));
			if (!result[j])
			{
				while (j)
				{
					j--;
					free(result[j]);
				}
				free(result);
				return (NULL);
			}
			for (i = 0; i < len; i++)
				result[j][i] = *str++;
			result[j][i] = '\0';
			j++;
		}
	}
	result[j] = NULL;
	return (result);
}
