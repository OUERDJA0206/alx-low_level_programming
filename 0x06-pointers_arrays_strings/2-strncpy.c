#include "main.h"
/**
* _strncpy - this fuction will concatenates two strings
* @dest: the string that will modified.
* @src: the string that ill be concatenated to @des.
* @n: how much to copy from src into dest.
* Return: a pointer to @des
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
