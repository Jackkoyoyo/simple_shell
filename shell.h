#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <stddef.h>

void printo(const char *input);
void my_prompt(void);
void exec_instruct(const char *instruct);
void user_input(char *input, size_t size);

#endif /*MAIN_H*/
