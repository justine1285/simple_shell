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
		userInput(myform);

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
			AnalP(myform, args);
			evaluate(args, myfom, buffer);

			rmem_pointer((void *) args);
		}
		rmem((void *) buffer);
		rmem((void *) env_path);
	}
}
