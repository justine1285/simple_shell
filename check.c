#include "simpleshell.h"
#include "shell.h"
/**
 * check - run analysis on args passed to the prompt
 * @args: argument to check for
 * @myform: a struct created of a certain datatype
 * @buffer: line accepted
 * Return: nothing, just do the task
 */
void check(char **args, simpleshell_t *myform, char *buffer)
{
	char *cmmd;
	int upgrade;

	if (*args == NULL || args == NULL)
	{
		return;
	}
	cmmd = args[0];
	myform->cmmd = cmmd;
	if (builtin(myform, args) == 1)
	{
		return;
	}
	upgrade = myfile(cmmd);
	if (upgrade == 0)
	{
		myform->code_status = 126;
		myform->err_digits = 13;
		issues_error(myform);
		return;
	}
	if (upgrade == 1)
	{
		work(cmmd, args, myform, buffer);
		return;
	}
	if (current_dir(cmmd, args, buffer, myform) == 1)
		return;
	myform->cmmd_path = choose_message(myform);
	if (myform->cmmd_path != NULL)
	{
		work(myform->cmmd_path, args, myform, buffer);
		rmem((void *) myform->cmmd_path);
		return;
	}
	myform->code_status = 127;
	myform->err_digits = 132;
	issues_error(myform);
}
