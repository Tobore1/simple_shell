#ifndef SHELL_H
#define SHELL_H
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
void show_prompt();
void exe_command(const char *reqest);
void printdt(const char *text);
void take_command(char *request, size_t size );
int calculateStringLength(const char *str);
#endif
