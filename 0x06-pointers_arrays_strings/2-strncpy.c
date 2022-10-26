#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: The buffer storing the string copy.
 * @src: The source string.
 * @n: The maximum number of bytes to copied from src.
 * Return: A pointer to the resulting string dest.
 **/

char *_strncpy(char *dest, char *src, int n)
{
        int fn;

        for (fn = 0; src[fn] != '\0'; fn++)
                if (fn < n)
                        dest[fn] = src[fn];
                while (fn < n)
                        dest[fn++] = '\0';

        return (dest);
}
