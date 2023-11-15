#include "simpleshell.h"
/**
 * wordMerge - joins 3 words with a delimeter
 * @word1: word1 to join
 * @word2: word2 to join
 * @word3: word3 to join
 * @del: delimeter between the words
 * Return: a string composed of strings joined together
 */
char *wordMerge(char *word1, char *word2, char *word3, const char *del)
{
	int size1, size2, size3, del_size;
	char *link;

	size1 = size2 = size3 = del_size = 0;

	if (word2 != NULL)
		size2 = str_lenz(word2);
	else
		word2 = "";

	if (word1 != NULL)
		size1 = str_lenz(word1);
	else
		word1 = "";
	if (word3 != NULL)
		size3 = str_lenz(word3);
	else
		word3 = "";
	if (del != NULL)
		del_size = str_lenz((char *)del);
	else
		del = "";

	link = malloc(size1 + del_size + size2 + del_size + size3 + 2);
	if (link == NULL)
	{
		return (NULL);
	}
	link = str_cpys(link, word1);
	link = str_cats(link, (char *)del);
	link = str_cats(link, word2);
	link = str_cats(link, (char *)del);
	link = str_cats(link, word3);
	link = str_cats(link, "\n");

	return (link);
}
