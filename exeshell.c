#include "shell.h"
void exe_command(const char *reqest){
    pid_t small_pid = fork();

    if (small_pid == -1) {
        perror("fork");
        exit(EXIT_FAILURE);
    }else if (small_pid == 0) {
        execlp(reqest,reqest, (char *)NULL);
        perror("execlp");
        exit(EXIT_FAILURE);

    }else{
        wait(NULL);
    }

}
