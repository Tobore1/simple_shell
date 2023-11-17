#include"shell.h"
void printdt(const char *text) {
    write(STDOUT_FILENO, text, calculateStringLength(text));
}
