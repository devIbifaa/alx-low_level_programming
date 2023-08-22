#include <stdio.h>

/**
 *_strlen(char *s) - main fuction
 *Description: function to print the length of s
 *@s: the string
 *@length: the length of the string
 *Return: length of string
 */
int _strlen(char *s)
{
int length = 0;
while (*s != '\0')
{
length++;
s++;
}
return (length);
}
