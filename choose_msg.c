#include "simpleshell.h"
#include "shell.h"
/**
 * choose_message - check for error code and selec a match
 * with the error code gotten
 * @myform: a struct to the shell
 * Return: a character pointer to the message
 */
char *choose_message(simpleshell_t myform)
{
	int k;
	int options;

	issue_t mesg[] = {
		{_ENOENT_, 3},
		{_EACCES_, 13},
		{_CMD_NOT_EXISTS_, 132},
		{_ILLEGAL_NUMBER_, 133}
	};

	options = sizeof(mesg) / sizeof(mesg[0]);
	for (k = 0; k < options; k++)
		if (myform.err_digits == mesg[k].password)
			return (mesg[k].mesg);

	return ("");
}
