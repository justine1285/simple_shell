#include "simpleshell.h"
#include "shell.h"
/**
 * binary - exits the shell
 * Description: so many memory are used in the program,
 * so we free them and exit
 * @myform: struct called info withn several variable declaration
 * @args: argument cmd
 * Return: void or nothing
 */
void binary(simpleshell_t *myform, char **args)
{
	int k, z;

	k = 1;
	if (args[1] != NULL)
	{
		k = manage_numb(myform, args[1]);
	}

	if (k == 0)
	{
		return;
	}

	z = myform->code_status;

	rmem_pointer((void **) args);
	rmem((void *) myform->buff);
	rmem((void *) myform->envn);
	rmem((void *) myform);

	exit(z);
}
