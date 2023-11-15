#include "simpleshell.h"
#include "shell.h"
/**
 * main - the main program of the simple shell
 * Description: this program runs a basic shell
 * @argcount: argument count
 * @argvec: argument vector
 * Return: on success (0)
 */
int main(int argcount, char **argvec)
{
	int status;
	simpleshell_t *myform;

	myform = malloc(sizeof(simpleshell_t));
	if (myform == NULL)
	{
		perror(argvec[0]);
		exit(1);
	}

	myform->pid = getpid();
	myform->code_status = 0;
	myform->n_cmmd = 0;
	myform->argc = argcount;
	myform->argv = argvec;
	myform->it_mode = isatty(0) == 1;
	begins(myform);

	status = myform->code_status;

	free(myform);

	return (status);
}
