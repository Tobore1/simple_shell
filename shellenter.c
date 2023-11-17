#include "shell.h"
int main(void) {
    char request[300];
    char a =1;
    while (a)
    {
         show_prompt();
        take_command(request, sizeof(request));
        exe_command(request);

    }
    
    
    
    return 0;
}
