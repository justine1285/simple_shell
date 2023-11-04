#include "simpleshell.h"
/**
 * sign_handler - program that handles SIGINT
 * @nos: unused argument
 * Return: nothing
 */
void sign_handler(int nos)
{
	(void) nos;
	
	sig(SIGINT, sign_handler);
	disp("\n$");
	flushh(stdout);
}
