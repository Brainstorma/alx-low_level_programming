#include "main.h"
#include <stdio.h>

/**
 * print_line - prints a s bytes of a buffer
 * @c: buffer to print
 * @x: bytes of buffer to print
 * @y: line of buffer to print
 * Return: void
 **/

void print_line(char *c, int x, int y)
{
int fn, sn;

for (fn = 0; fn <= 9; fn++)
{

if (fn <= x)
printf("%02x", c[y * 10 + fn]);

else
printf("  ");

if (fn % 2)
putchar(' ');
}
for (sn = 0; sn <= x; sn++)
{

if (c[y * 10 + sn] > 31 && c[y * 10 + sn] < 127)
putchar(c[y * 10 + sn]);
else
putchar('.');
}
}

/**
 * print_buffer - prints a buffer
 * @b: buffer to print
 * @size: size of buffer
 * Return: void
 **/

void print_buffer(char *b, int size)
{
int pbuff;
for (pbuff = 0; pbuff <= (size - 1) / 10 && size; pbuff++)
{
printf("%08x: ", pbuff * 10);
if (pbuff < size / 10)
{
print_line(b, 9, pbuff);
}
else
{
print_line(b, size % 10 - 1, pbuff);
}
putchar('\n');
}
if (size == 0)
putchar('\n');
}
