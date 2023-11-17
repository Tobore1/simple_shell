#include "shell.h"
void take_command(char *request, size_t size ) {
    if (fgets(request, size, stdin)== NULL){
        if(feof(stdin)) {
            printdt("\n");
            exit(EXIT_FAILURE);
        } else {
            printdt("error when reading input. \n");
            exit(EXIT_FAILURE);
        }
    }
    request[strcspn(request,"\n")] = '\0';
}
