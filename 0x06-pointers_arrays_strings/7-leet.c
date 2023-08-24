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
if (str == NULL)
{
return (NULL);
}

for (i = 0; str[i] != '\0'; i++)
{
char c = str[i];
const char *leetChars = "aeotlAEOTL";
const char *leetReplacements = "430711430711";

for (j = 0; leetChars[j] != '\0'; j++)
{
if (c == leetChars[j])
{
str[i] = leetReplacements[j];
break;
}
}
}

return (str);
}


