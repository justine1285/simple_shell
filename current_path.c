#include "simpleshell.h"
/**
 * current_path - checks the arrangement of the path
 * @paths: the path to check
 * @myform: struct with data type
 * Return: perform task without returning
 */
void current_path(char *paths, simpleshell_t *myform)
{
	myform->curr_path = 0;

	if (paths == NULL)
	{
		return;
	}
	if (paths[0] == ':')
	{
		myform->curr_path = 1;
	}
}
