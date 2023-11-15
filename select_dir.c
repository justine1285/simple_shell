#include "simpleshell.h"
/**
 * select_dir - function finds directories when its needed
 * @direcname: directory name
 * @myform: struct that defines a certain data type
 * Return: pointer to a string
 */
char *select_dir(char *direcname, simpleshell_t *myform)
{
	int period;
	char *path, *path_temp, *tok, *del;

	(void) myform;

	path = get_env("PATH");
	if (path == NULL)
	{
		return (NULL);
	}

	tok = strtok(path, ":");

	period = str_lenz(direcname) + 2;
	del = malloc(period * sizeof(char));
	del = str_cpys(del, "/");
	del = str_cats(del, direcname);

	while (tok != NULL)
	{
		path_temp = malloc(str_lenz(tok) + period);
		path_temp = str_cpys(path_temp, tok);
		path_temp = str_cats(path_temp, del);

		if (is_cmmd(path_temp) == 1)
		{
			free(path);
			free(del);
			return (path_temp);
		}
		tok = strtok(NULL, ":");

		free(path_temp);
	}
	free(del);
	free(path);

	return (NULL);
}
