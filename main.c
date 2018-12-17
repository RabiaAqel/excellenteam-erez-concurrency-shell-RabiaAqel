#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <stdlib.h>
#include <string.h>

#define MAX_INPUT 20

int main (int argc, char *argv[])
{
    char input[MAX_INPUT];

    printf ("<cmd> ");

    char *command = "";
    char *args = "";

    char delim[] = " ";

    scanf ("%99[0-9a-zA-Z ]", input);

    command = strtok (input, " ");

    while (command)
    {
        printf ("%s\n", command);
        command = (NULL, " ");
    }







//    pid_t pid = fork ();
//
//    if (pid == 0)
//    {
////        static char *argv[] = {"reverse", *argv[1]};
//
//        execv ("reverse", argv);
//        exit (-1);
//    } else
//    {
//        waitpid (pid, 0, 0);
//    }
    return 0;
}