#include <stdio.h>
#include <ctype.h>

/**
 * print_buffer - Prints the content of a buffer.
 * @b: The buffer to be printed.
 * @size: The number of bytes to print from the buffer.
 */
void print_buffer(char *b, int size)
{
int i, j;

if (size <= 0)
{
printf("\n");
return;
}
for (i = 0; i < size; i += 10)
{
printf("%08x: ", i);
for (j = 0; j < 10; j++)
{
if (j % 2 == 0 && j > 0)
printf(" ");
if (i + j < size)
printf("%02x", (unsigned char)b[i + j]);
else
printf("  ");
if (j == 9)
printf(" ");
}
printf(" ");

for (j = 0; j < 10; j++)
{
if (i + j < size)
{
char c = b[i + j];
if (isprint(c))
putchar(c);
else
putchar('.');
}
else
{
putchar(' ');
}
}
printf("\n");
}
}