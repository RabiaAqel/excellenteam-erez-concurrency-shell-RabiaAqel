#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <stdlib.h>
#include <string.h>

#define MAX_INPUT 20

char **parseCommand (char *input)
{
    char **command = malloc (MAX_INPUT * sizeof (char *));
    char *delimeter = " ";
    char *token;
    int index = 0;

    token = strtok (input, delimeter);
    while (token)
    {
        command[index++] = token;
        token = strtok (NULL, delimeter);
    }

    /*  Terminator */
    command[index] = NULL;
    return command;
}

int main (int argc, char *argv[])
{

    pid_t pid;
    char **args;
    char input[MAX_INPUT];

    printf ("<cmd> ");
    scanf ("%99[0-9a-zA-Z ]", input);
    args = parseCommand (input);

    pid = fork ();

    /* Child */
    if (pid == 0)
    {

        execv (args[0], args);
        exit (0);

    }
        /* Father */
    else
    {

        waitpid (pid, 0, 0);
        free (args);

    }

    return 0;
}
