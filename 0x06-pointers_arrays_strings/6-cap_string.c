#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>
#include <string.h>

/**
 * cap_string - Capitalizes all words in a string.
 * @str: The input string.
 *
 * Return: A pointer to the modified string.
 */
char *cap_string(char *str)
{
int i;
bool new_word;
if (str == NULL || str[0] == '\0')
{

return (str);
}

new_word = true;

for (i = 0; str[i] != '\0'; i++)
{

if (strchr(" \t\n,;.!\"(){}", str[i]) != NULL)
{
new_word = true;
}

else if (new_word && isalpha(str[i]))
{
str[i] = toupper(str[i]);
new_word = false;
}

else if (!new_word && isalpha(str[i]))
{
str[i] = tolower(str[i]);
}
}
return (str);
}

