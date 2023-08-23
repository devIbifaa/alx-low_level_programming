#include <stdio.h>
#include <limits.h>

/**
 * _atoi - Converts a string to an integer.
 * @s: The input string.
 *
 * Return: The integer value extracted from the string.
 */
int _atoi(char *s)
{
int result = 0;
int sign = 1;

while (*s != '\0') {
if (*s == '-') {
sign = -1;
}
else if (*s >= '0' && *s <= '9')
{
int digit = *s - '0';

if (result > (INT_MAX - digit) / 10)
{
return (sign == 1) ? INT_MAX : INT_MIN;
}
result = result * 10 + digit;
}
else if (*s != '+' && *s != ' ' && *s != '\t')
{

break;
}
s++;
}

 return (result *sign);
}


