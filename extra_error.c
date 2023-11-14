#include "simpleshell.c"
/**
 * add_error - function prints the error message with more
 * information about the error
 * @myform: struct that gives information about the shell
 * @extra: the extra information about the error
 * Return: nothing, print the error and continue
 */
void add_error(simpleshell_t *myform, char *extra)
{
	char *au1, *au2;
	char *msg, *num;
	int msg_size, num_size;
	int extra_size;

	num = NULL;
	msg = choose_message(*myform);
	num = con_number(myform->n_cmmd);

	num_size = str_lenz(num);
	msg_size = str_lenz(myform->argv[0]);
	extra_size = str_lenz(extra);

	au1 = malloc(msg_size + num_size + 3);
	au1 = str_cpys(au1, myform->argv[0]);
	au1 = str_cats(au1, ": ");
	au1 = str_cats(au1, num);

	au2 = malloc(str_lenz(msg) + extra_size + 3);
	au2 = str_cpys(au2, msg);
	au2 = str_cats(au2, ": ");
	au2 = str_cats(au2, extra);

	msg = wordMerge(au1, myform->cmmd, au2, ": ");
	display_err(msg);

	free(msg);
	free(num);
	free(au1);
	free(au2);
}
