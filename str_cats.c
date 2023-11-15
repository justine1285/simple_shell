#include "simpleshell.h"
#include "shell.h"
/**
 * str_cats - function that concatenates two strings
 * @ghost: destination string
 * @core: source string
 * Return: pointer to destination string
 */
char *str_cats(char *ghost, char *core)
{
	int length1, length2, k;

	for (length1 = 0; ghost[length1] != '\0'; length1++)
	{

	}
	for (length2 = 0; core[length2] != '\0'; length2++)
	{

	}
	for (k = 0; k <= length2; k++)
	{
		ghost[length1 + k] = core[k];
	}

	return (ghost);
}
