#include "shell.h"

/**
 * main - entry point
 * return: Always 0(success)
 */

int main(void)
{
	char instruct[150];
	
	while (1)
	{
		my_prompt();
		user_input(instruct,sizeof(instruct));
		exec_instruct(instruct);
	}
	return (0);
}
