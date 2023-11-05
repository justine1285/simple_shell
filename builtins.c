#innclude "simpleshell.h"
/**
 * function - checks for executables builtins
 * @myform: a struct with a data type of info
 * about the shell
 * @args: command
 * Return: 1 for bultin command 0 if not
 */
int function(simpleshell_t *myform, char **args)
{
	int k;

	k = builtin(myform, args);
	if (k == 0)
	{
		return (0);
	}

	return (1);
}
