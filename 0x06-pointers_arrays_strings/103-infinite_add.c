#include <stdio.h>
#include <string.h>

/**
 * infinite_add - Adds two numbers represented as strings.
 * @n1: The first number as a string.
 * @n2: The second number as a string.
 * @r: The buffer to store the result.
 * @size_r: The size of the buffer.
 *
 * Return: A pointer to the result (in r) or 0
 * if the result cannot be stored in r.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int len1 = strlen(n1);
int len2 = strlen(n2);
int carry = 0;
int max_len = (len1 > len2) ? len1 : len2;

int i = len1 - 1;
int j = len2 - 1;
int k = max_len;


if (max_len + 1 > size_r)
{
return (0);
}


r[k + 1] = '\0';

while (i >= 0 || j >= 0 || carry > 0)
{
int num1 = (i >= 0) ? (n1[i] - '0') : 0;
int num2 = (j >= 0) ? (n2[j] - '0') : 0;

int sum = num1 + num2 + carry;
carry = sum / 10;
r[k] = (sum % 10) + '0';

i--;
j--;
k--;
}


if (r[0] == '0')
{
memmove(r, r + 1, max_len);
}

return (r);
}

