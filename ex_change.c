#include "simpleshell.h"
/**
 * ex_change - replace or exchange function
 * @myform: a struct argument that takes a pointer
 * @index: index parameter
 * @alp: enter words
 * Return: pointer to string
 */
char *ex_change(simpleshell_t *myform, int *index, char *alp)
{
	char *snow;
	char symbol;

	(void) index;

	symbol = *alp;
	if (symbol != '?' && symbol != '$')
	{
		snow = minus_env(myform, alp);
		return (snow);
	}

	snow = (symbol == '$') ? stringly(myform->pid) :
		stringly(myform->code_status);

	return (snow);
}
