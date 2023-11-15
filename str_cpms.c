#include "simpleshell.h"
#include "shell.h"
/**
 * str_cmps - program compares two strings
 * @strg1: string one
 * @strg2: string two
 * Return: 0
 */
int str_cmps(char *strg1, char *strg2)
{
	int k;
	int z;

	z = 0;
	for (k = 0; strg1[k] != '\0' && z == 0; k++)
	{
		z = strg1[k] - strg2[k];
	}

	return (z);
}
