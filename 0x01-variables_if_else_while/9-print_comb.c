#include <stdio.h>
/**
 * main - Prints all possible combinations of single digits.
 *
 * Return: Always 0.
 */
int main(void)
{
	int numbers;

	for (numbers = 0; numbers <= 9; numbers++)
	{
		putchar((numbers % 10) + '0');
		if (numbers == 9)
			continue;
		putchar(',');
		putchar(' ');
	}
	putchar('\n');

	return (0);
}
