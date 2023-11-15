#include "simpleshell.h"
#include "shell.h"
/**
 * minus_env - function substitutes environment variables
 * @myform: enter argument
 * @e_var: enter environment var
 * Return: pointer to string
 */
char *minus_env(simpleshell_t *myform, char *e_var)
{
	char *environ;

	(void) myform;

	environ = get_env(e_var);
	if (environ != NULL)
	{
		return (environ);
	}

	return (NULL);
}

