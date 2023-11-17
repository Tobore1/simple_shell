#include "shell.h"
void exe_command(const char *reqest){
    pid_t small_pid = fork();

    if (small_pid == -1) {

        printdt ("encounted an errror duing forking process.\n");
        exit(EXIT_FAILURE);
    } else if (small_pid == 0) {
        char *argus[300];
        int argu_count = 0;

        char *toko = strtok((char *) reqest, " ");
        while (toko != NULL)
        {
            argus[argu_count++] = toko;
            toko = strtok(NULL, " ");
        }
        argus[argu_count] = NULL;
        execvp(argus[0],argus);
        printdt("encount error executing command. \n");
        exit(EXIT_FAILURE);

    } else
    {
         wait(NULL);
    }
       

}
