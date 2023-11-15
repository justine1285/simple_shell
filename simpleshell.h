#ifndef _SIMPLESHELL_H_
#define _SIMPLESHELL_H_


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

#endif
