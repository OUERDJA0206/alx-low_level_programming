#include "main.h"
/**
* _strcat - this fuction will concatenates two strings
* @dest: the string that will modified.
* @src: the string that ill be concatenated to @des.
* Return: a pointer to @dest
*/
char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}
