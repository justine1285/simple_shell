#include "simpleshell.h"
#include "shell.h"
/**
 * builtin - function helps confirm a builtin command
 * @myform: struct with data type about the shell
 * @args: argument count
 * Return: 1 for builtin and 0 if not
 */
int builtin(simpleshell_t *myform, char **args)
{
	int k, z;

	function_t builtins[] = {
		{"exit", binary},
		{"env", binary_env}
	};

	z = sizeof(builtins) / sizeof(builtins[0]);
	k = 0;
	while (k < z)
	{
		if (str_cmps(myform->cmmd, builtins[k].cmmd) == 0)
		{
			builtins[k].func(myform, args);
			return (1);
		}
		k++;
	}

	return (0);
}
