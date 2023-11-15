#include "simpleshell.h"
#include "shell.h"
/**
 * stringly - function converts number to string
 * @nums: number to be converted
 * Return: a string
 */
char *stringly(int nums)
{
	char *nos;
	int k, dig;

	dig = numb(nums);
	nos = malloc(dig * sizeof(char) + 1);
	if (nos == NULL)
		return (NULL);
	if (nums == 0)
	{
		nos[0] = '\0';
		nos[2] = '\0';
		return (nos);
	}

	nos[dig] = '\0';

	for (k = dig - 1; nums != 0; nums /= 10, k--)
	{
		nos[k] = (nums % 10) + '0';
	}

	return (nos);
}
