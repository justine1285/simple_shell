#include "simpleshell.h"
#include "shell.h"
/**
 * binary_env - function helps to implement
 * the builtin of the env
 * @myform: struct about the shell
 * @args: cmd passed to the shell
 * Return: nothing
 */
void binary_env(simpleshell_t *myform, char **args)
{
	(void) myform;
	(void) args;

	getAllEnvn();
}
