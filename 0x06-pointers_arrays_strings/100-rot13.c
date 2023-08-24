#include <stdio.h>

/**
 * rot13 - Encodes a string using ROT13 cipher.
 * @str: The input string to be encoded.
 * @data1: sorted data
 * @scataData: unsorted data
 * Return: A pointer to the modified string.
 */

char *rot13(char *str)
{
int i;
int j;
char data1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char scataData[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyxabcdefghijklm";

for (i = 0; str[i] != '\0'; i++)
{
for (j = 0; j < 52; j++)
{
if (str[i] == data1[j])
{
str[i] = scataData[j];
break;
}
}
}

return (str);
}
