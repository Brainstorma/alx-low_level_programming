#include <stdlib.h>
#include <stdio.h>

/**
 * flash - Prints a string before the main function is executed.
 **/

void __attribute__ ((constructor)) flash()
{
printf(
"You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
