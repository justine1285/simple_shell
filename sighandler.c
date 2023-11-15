#include "simpleshell.h"
#include "shell.h"
/**
 * sign_handler - program that handles SIGINT
 * @nos: unused argument
 * Return: nothing
 */
void sign_handler(int nos)
{
	(void) nos;

	signal(SIGINT, sign_handler);
	display_msg("\n$ ");
	fflush(stdout);
}
