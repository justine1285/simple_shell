#include "simpleshell.h"
/**
 * get_env - function that helps you get an environ variable
 * @variable: the environ variable to get
 * Return: if successful printf(name of variable) else return NULL
 */
char *get_env(const char *variable)
{
	char **k, *z, *x, *y;
	int size;

	size = str_lenz((char *) variable);

	for (k = environ; *k; ++k)
	{
		z = str_dups(*k);

		x = strtok(z, "=");
		if (x == NULL)
		{
			free(z);
			return (NULL);
		}

		if (str_lenz(x) != size)
		{
			free(z);
			continue;
		}
		if (str_cmps((char *) variable, z) == 0)
		{
			x = strtok(NULL, "=");
			y = str_dups(x);
			free(z);
			return (y);
		}
		free(z);
	}
	return (NULL);
}
