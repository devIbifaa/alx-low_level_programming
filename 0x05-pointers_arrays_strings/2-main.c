#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
char *str;
int length;

str = "My first strlen!";
length = _strlen(str);
printf("%d\n", length);
return (0);
}
