#include <stdio.h>
/**
* main - prints the alphabet except letter q and e
*
* Return: Always 0
*
*/

int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		if (alphabet != 'q' && alphabet != 'e')
		{
			putchar(alphabet);
		}
	}
	putchar('\n');

	return (0);
}
