#include <stdio.h>

/**
 * _puts - Prints a string to stdout followed by a new line.
 *
 * @str: The string to be printed.
 */

void _puts(char *str)
{
while (*str != '\0')
{
putchar(*str);
str++;
}
putchar('\n');
}
