#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* strtow - splits a string into words
* @str: input string to split
* Return: pointer to new string
*/
char **strtow(char *str)
{
	int len = 0;
	int i = 0, j = 0;
	char **result;

	if (!str || !*str)
		return (NULL);
	while (str[len])
		len++;
	result = malloc((len + 1) * sizeof(char *));
	if (!result)
		return (NULL);
	 while (*str)
	 {
		 while (*str && (*str == ' ' || *str == '\t'))
			 str++;
		 if (*str)
		 {
			 len = 0;
			 while (str[len] && (str[len] != ' ' && str[len] != '\t'))
				 len++;
			 result[j] = malloc((len + 1) * sizeof(char));
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
	 if (j == 0)
	 {
		 free(result);
		 return (NULL);
	 }
	 return (result);
}
