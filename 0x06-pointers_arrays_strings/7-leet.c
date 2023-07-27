#include "main.h"
/**
* leet - breaking out the leet speak.
* @a: string to make 1337
* Return: a point the a
*/
char *leet(char *a)
{
	int i, j;
	char lt[10][2] = {
		{'a', '0' + 4}, {'A', '0' + 4},
		{'e', '0' + 3}, {'E', '0' + 3},
		{'o', '0'}, {'O', '0'},
		{'t', '0' + 7}, {'T', '0' + 7},
		{'l', '0' + 1}, {'L', '0' + 1}};

	for (i = 0; a[i] != '\0'; i++)
	{
		for (j = 0; lt[j][0] != '\0'; j++)
		{
			if (a[i] == lt[j][0])
			a[i] = lt[j][1];
		}
	}
	return (a);
}
