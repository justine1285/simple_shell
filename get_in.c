#include "simpleshell.h"
/**
 * userInput - prompt for the shell program
 * @myform: struct of information
 */
void userInput(simpleshell_t *myform)
{
	if (myform->it_mode == 0)
	{
		return;
	}

	display_msg("$ ");
}
