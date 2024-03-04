#include "shell.h"

/**
  * printo - function that print out to standard output
  * @input: string to be printed
  */

void printo(const char *input)
{
	write(STDOUT_FILENO, &input, strlen(input));
}
