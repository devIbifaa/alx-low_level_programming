#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - Entry point of the program
* Description: Program loop through the alphabet & print a character
* Return: 0 (Success)
*/
int main(void)
{
char c;
for (c = 'a'; c <= 'z'; c++)
{
putchar(c);
}
putchar('\n');
return (0);
}
