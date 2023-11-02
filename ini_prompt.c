#include "simpleshell.h"
/**
 * ini_prompt - This function represents the interactibe prompt
 * @myform: struct of general information
 * Return: Buffer gotten from stdin or NULL if EDF was found
 */
void ini_prompt(simpleshell_t *myform)
{
	char *buffer, **args, *env_path;

	signal(SIGINT, sign_handler);
	while (1)
	{
		get_input(myform);

		env_path = get_env("PATH");
		current_path(env_path, myform);

		myform->envn = env_path;
		buffer = par_prompt();
		if (buffer == NULL)
		{
			display_msg(myform->it_mode == 1 ? "exit\n" : "");
			free(env_path);
			break;
		}
		myform->n_cmmd++;
		if (buffer[0] != '\n')
		{
			args = tokenWords(buffer, " \t\n");

			myform->myarguments = args;
			myform->buff = buffer;
			pattern(myform, args);
			evaluate(args, myform, buffer);

			memory_pointer((void *) args);
		}
		memory((void *) buffer);
		memory((void *) env_path);
	}
}
