#include <stdio.h>

/**
 * rev_string - Reverses a string.
 *
 * @s: The string to be reversed.
 */
void rev_string(char *s)
{
int length = 0;
int start = 0;
char temp;

while (s[length] != '\0')
{
length++;
}


for (start = 0; start < length / 2; start++)
{
temp = s[start];
s[start] = s[length - 1 - start];
s[length - 1 - start] = temp;
}
}
