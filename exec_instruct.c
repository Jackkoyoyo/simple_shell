#include "shell.h"

/**
 * exec_instruct - executes child id
 * @instruct: A string
 */

 void exec_instruct(const char *instruct)
{
	pid_t child_pid = fork();

	if (child_pid == 0)
	{
		execlp( instruct, instruct, (char *)NULL);
		perror("execlp");
		exit(EXIT_FAILURE);
	}
	else if (child_pid == -1)
	{
		perror("fork");
		exit(EXIT_FAILURE);
	}
	else
	{
		wait(NULL);
	}
}
