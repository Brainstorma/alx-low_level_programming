#include "main.h"

/**
 * *_strcpy - copies the string pointed to by src including the terminating null byte (\0)
 * @dest: pointer to the buffer in which we copy the string
 * @src: string to be copied
 * challenge: standard library is prohibited.
 * Return: the pointer to 'dest'
 **/

char *_strcpy(char *dest, char *src)
{
	int fn = -1;

	do {
		fn++;
		dest[fn] = src[fn];
	} while (src[fn] != '\0');

	return (dest);
}
