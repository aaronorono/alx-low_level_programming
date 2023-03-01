#include "main.h"

/**
 * _strncpy - copy a string
 * @dest: destination string
 * @src: source string to copy from
 * @n: maximum number of bytes to copy from src
 * Return: pointer to the resulting string dest
 */

char *_strncpy(char *dest, char *src, int n)
{
int j;

j = 0;
while (j < n && src[j] != '\0')
{
dest[j] = src[j];
j++;
}
while (j < n)
{
dest[j] = '\0';
j++;
}

return (dest);
}
