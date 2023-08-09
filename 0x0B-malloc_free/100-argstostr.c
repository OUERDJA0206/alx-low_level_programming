#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
* argstostr - concatenates all the arguments of program
* @ac: count of args
* @av: pointer to array of args
* Return: pointer to new array of all args or NULL if failure
*/
char *argstostr(int ac, char **av)
{
	int total_length = 0;
	char *result = NULL;
	char *temp = NULL;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (int i = 0; i < ac; i++)
	{
		total_length += strlen(av[i]) + 1;
	}
	result = malloc(total_length + 1);
	if (result == NULL)
	{
		return (NULL);
	}
	temp = result;
	for (int i = 0; i < ac; i++)
	{
		strcpy(temp, av[i]);
		temp += strlen(av[i]);
		*temp = '\n';
		temp++;
	}
	*temp = '\0';
	return (result);
}
