#include "main.h"
#include <stdio.h>
/**
* _strlen - function with 1 argument
* @s: char type pointer
*
* Description: strlen similiar function to return length
* Return: string
*/
int _strlen(char *s)
{
	int i = 0;

	for ( ; *s != '\0'; *s++)
	{
		i++;
	}
	return (i);
}
