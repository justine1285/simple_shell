#include "simpleshell.h"
/**
 * add_error - function prints the error
 * @myform: struct parameter
 * @extra: gives more info about the error
 * Return: nothing
 */
void add_error(simpleshell_t *myform, char *extra)
{
	char *mesg, *nos;
	char *pen, *pan;
	int ns, ms, extra_size;

	nos = NULL;
	mesg = choose_message(*myform);
	mesg = stringly(myform->n_cmmd);

	ns = str_lenz(nos);
	ms = str_lenz(myform->argv[0]);
	extra_size = str_lenz(extra);

	pen = malloc(ms + ns + 3);
	pen = str_cpys(pen, myform->argv[0]);
	pen = str_cats(pen, ": ");
	pen = str_cats(pen, nos);

	pan = malloc(str_lenz(mesg) + ms + 3);
	pan = str_cpys(pan, mesg);
	pan = str_cats(pan, ": ");
	pan = str_cats(pan, extra);

	mesg = wordMerge(pen, myform->cmmd, pan, ": ");
	display_err(mesg);

	free(mesg);
	free(nos);
	free(pen);
	free(pan);
}
