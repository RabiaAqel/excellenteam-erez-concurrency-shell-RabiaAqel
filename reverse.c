//
// Created by Rabia on 17/12/2018.
//

#include <stdlib.h>
#include <stdio.h>

int main (int argc, char *argv[])
{
    int i = argc - 1;

    for (; i > 0; --i) printf ("%d: %s\n", (argc - i), argv[i]);

    exit (0);
}
