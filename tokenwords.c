#include "simpleshell.h"
#include "shell.h"
/**
 * tokenWords - splits a string into words
 * @str: string to separate
 * @del: Delimeter to seperate string
 * Return: string to the splited words
 */
char **tokenWords(char *str, const char *del)
{
	unsigned int former, recent;
	char **word, **temp, *token;

	former = sizeof(char *);
	word = malloc(former);
	if (word != NULL)
	{
		recent = 1;
		token = strtok(str, del);
		while (token)
		{
			if (token[0] == '#')
				break;
			temp = its_realloc(word, former, (recent + 1) * sizeof(char *)); 
			former = (recent + 1) * sizeof(char *);
			if (temp == NULL)
				break;
			word = temp;
			++recent;

			word[recent - 2] = malloc(str_lenz(token) + 1);
			if (word == NULL)
			{
				free(word);
				free(temp);
			}

			if (word[recent - 2] != NULL)
			{
				str_cpys(word[recent - 2], token);
			}
			token = strtok(NULL, del);
			temp = NULL;
		}
		word[recent - 1] = NULL;
	}
	return (word);
}
