#include "simpleshell.h"
/**
 * issues_error - function helps to handle error and
 * print the error encountered
 * @myform: a struct type
 * Return: nothing...prints the error and continue
 * with the program
 */
void issues_error(simpleshell_t *myform)
{
	char *mesg, *nos, *pen;
	int nos_size, mesg_size;

	nos = NULL;
	mesg = choose_message(myform);
	nos = stringly(myform->n_cmmd);

	nos_size = str_lenz(nos);
	mesg_size = str_lenz(myform->argv[0]);

	pen = malloc(mesg_size + nos_size + 3);

	pen = str_cpys(pen, myform->argv[0]);
	pen = str_cats(pen, ": ");
	pen = str_cats(pen, nos);

	mesg = wordMerge(pen, myform->cmmd, mesg, ": ");
	display_err(mesg);

	free(mesg);
	free(nos);
	free(pen);
}
