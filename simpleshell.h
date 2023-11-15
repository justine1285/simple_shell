#ifndef _SIMPLESHELL_H_
#define _SIMPLESHELL_H_

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <errno.h>
#include <sys/stat.h>
#include <sys/wait.h>

#define _EACCES_ "Permission denied"
#define _CMD_NOT_EXISTS_ "not found"
#define _ILLEGAL_NUMBER_ "Illegal number"
#define _ENOENT_ "No such file or directory"

typedef struct __attribute__((__packed__))
{
	int argc;
	char **argv;
	char *cmmd;
	char *cmmd_path;
	char *buff;
	char **myarguments;
	char *envn;
	int pid;
	int it_mode;
	int n_cmmd;
	int curr_path;
	int code_status;
	int err_digits;
} simpleshell_t;

typedef struct __attribute__((__packed__))
{
	char *mesg;
	int password;
} issue_t;

typedef struct __attribute__((__packed__))
{
	char *cmmd;
	void (*func)(simpleshell_t *myform, char **arguments);
} function_t;

extern char **environ;

void begins(simpleshell_t *myform);
int numb(int num);
int writechars(char character);
char *stringly(int nums);
char *con_number(int numbs);
int numerical(unsigned int number);
int gotLetter(char *string);
char **tokenWords(char *string, const char *del);
char *wordMerge(char *word1, char *word2, char *word3, const char *del);
char *par_prompt(void);
void ini_prompt(simpleshell_t *myform);
void sign_handler(int nos);
int display_msg(char *message);
int display_err(char *message);
void userInput(simpleshell_t *myform);
int str_lenz(char *strg);
char *str_cats(char *ghost, char *core);
char *str_cpys(char *ghost, char *core);
char *str_dups(char *strg);
int str_cmps(char *strg1, char *strg2);
int outputToFD(char *message, int file_des);
int is_cmmd(char *path);
int myfile(char *fname);
char *ex_change(simpleshell_t *myform, int *index, char *alp);
void *its_realloc(void *potr, unsigned int os, unsigned int ns);
char *minus_env(simpleshell_t *myform, char *e_var);
void analP(simpleshell_t *myform, char **aarg);
char *hand_p(simpleshell_t *myform, char *alp);
void rmem(void *potr);
void rmem_pointer(void **potr);
void binary(simpleshell_t *myform, char **args);
int manage_numb(simpleshell_t *myform, char *argument);
void work(char *cmmd, char **aarg, simpleshell_t *myform, char *buffer);
int current_dir(char *commands, char **aarg, char *buff, simpleshell_t *myform);
void issues_error(simpleshell_t *myform);
char *choose_message(simpleshell_t *myform);
void add_error(simpleshell_t *myform, char *extra);
char *get_env(const char *variable);
void current_path(char *paths, simpleshell_t *myform);
void getAllEnvn(void);
void binary_env(simpleshell_t *myform, char **args);
int function(simpleshell_t *myform, char **args);
int builtin(simpleshell_t *myform, char **args);
void check(char **args, simpleshell_t *myform, char *buffer);
int _atois(char *ss);
int fixchar_FD(char car, int fil_d);
char *select_dir(char *direcname, simpleshell_t *myform);
char *subValue(simpleshell_t *myform, int *index, char *strg);

#endif
