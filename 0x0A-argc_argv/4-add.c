#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Program that adds numbers
 * @argc: Number of command line arguments
 * @argv: array of arguents
 * Return: 0 for expected results
 **/

int main(int argc, char *argv[])
{
        int fnum, sadd = 0;

        if (argc < 1)
                return (0);

        for (fnum = 1; fnum < argc; fnum++)
        {
                if (!atoi(argv[fnum]))
                {
                        printf("%s\n", "Error");
                        return (1);
                }
                sadd += atoi(argv[fnum]);
        }
        printf("%d\n", sadd);

        return (0);
}
