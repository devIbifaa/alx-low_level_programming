#include <stdio.h>
#include <string.h>

/**
 * leet - Encodes a string into "1337" (leet speak).
 * @str: The input string to be encoded.
 *
 * Return: A pointer to the modified string.
 */
char *leet(char *str)
{
int i;
int j;
char s1[] = "aAeEoOtTlL";
char s2[] = "4433007711";

for (i = 0; str[i] != '\0'; i++)
{
for (j = 0; j < 10; j++)
{
if (str[i] == s1[i])
{
str[i] = s2[j];
}
}
}

return (str);
}


