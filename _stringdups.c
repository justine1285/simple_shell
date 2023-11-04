#include "simpleshell.h"
/**
 * str_dups - program duplicates a string
 * @strg: string to be duplicated
 * Return: char pointer to duplicte string
 */
char *str_dups(char *strg);
{
	char *ghost;
	int ssize;
	int z;

	if (strg == NULL)
	{
		return (NULL);
	}

	ssize = str_lenz(strg) + 1;
	ghost = malloc(ssize * sizeof(char));
	if (ghost == NULL)
	{
		return (NULL);
	}
	for (z = 0; z < ssize; z++)
	{
		ghost[z] = strg[z];
	}

	return (ghost);
}
