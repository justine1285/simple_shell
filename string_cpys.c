#include "simpleshell.h"
#include "shell.h"
/**
 * str_cpys - program that points to a char
 * @ghost: pointer to character
 * @core: pointer to character
 * Return: char
 */
char *str_cpys(char *ghost, char *core)
{
	int k;

	for (k = 0; core[k] != '\0'; k++)
	{
		ghost[k] = core[k];
	}
	ghost[k] = '\0';

	return (ghost);
}

