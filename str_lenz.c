#include "simpleshell.h"
/**
 * str_lenz - program returns length of string
 * @strg: string length to check
 * Return: int
 */
int str_lenz(char *strg)
{
	int lent = 0;

	while (strg[lent] != '\0')
	{
		lent++;
	}
	return (lent);
}
