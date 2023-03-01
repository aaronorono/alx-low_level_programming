#include "main.h"

/**
 * string_toupper - change all lowercase characters of a string to uppercase
 * @n: pointer to the string to modify
 * Return: the modified string
 */

char *string_toupper(char *n)
{
int i;

for (i = 0; n[i] != '\0'; i++)
{
if (n[i] >= 'a' && n[i] <= 'z')
{
n[i] -= 32;
}
}

return (n);
}
