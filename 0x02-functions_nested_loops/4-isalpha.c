#include "main.h"
/**
* _isalpha - Checks for lowercase or uppercase character
* @c: The character to be checked
* Return: 1 for lowercase or uppercase character or 0 for anything el
*/
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
