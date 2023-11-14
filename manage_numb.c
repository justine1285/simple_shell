#include "simpleshell.h"
/**
 * manage_numb - controls the argument of exit builtin
 * @myform: struct to access its type
 * @argument: argument of builtin exit passed
 * Return: if the argument exist then return 1
 * else return 0
 */
int manage_numb(simpleshell_t *myform, char *argument)
{
	int controller;

	controller = _atois(argument);

	if (controller < 0 || gotLetter(argument))
	{
		myform->code_status = 2;
		myform->err_digits = 133;
		add_error(myform, argument);
		return (0);
	}

	if (controller > 255)
	{
		myform->code_status = controller % 256;
	}
	else
	{
		myform->code_status = controller;
	}

	return (1);
}
