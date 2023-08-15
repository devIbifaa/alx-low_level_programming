#include <stdio.h>
/**
*main - prints alphabets
*Return: always (0)
*/
int main(void)
{
char let  = 'a';
char upLetters = 'A';
while (let <= 'z')
{
putchar(let);
let++;
}
while (upLetters <= 'Z')
{
putchar(upLetters);
upLetters++;
}
putchar('\n');
return (0);
}
