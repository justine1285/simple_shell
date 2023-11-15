#include "simpleshell.h"
#include "shell.h"
/**
 * gotLetter - search if a string contains letter
 * @string: string to check if letter is present
 * Return: if a non digit was found, return 1
 * if not, return 0
 */
int gotLetter(char *string)
{
	int k;

	for (k = 0; string[k] != '\0'; k++)
	{
		if (numerical(string[k]) == 0)
			return (1);
	}

	return (0);
}
