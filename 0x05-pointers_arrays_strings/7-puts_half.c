#include <stdio.h>
#include <string.h>

/**
 * puts_half - Prints the second half of a string, followed by a new line.
 * @str: The input string.
 */
void puts_half(char *str)
{
int length = strlen(str);
int start;

if (length % 2 == 0)
{
start = length / 2;
}
else
{
start = (length - 1) / 2;
}

for (; str[start] != '\0'; start++)
{
_putchar(str[start]);
}

_putchar('\n');
}
