#include <stdio.h>

/**
 * main - Prints all single digit numbers of base 10 starting from 0.
 *
 * Return: Always 0.
 */
int main(void)
{
	int numbers;

	for (numbers = 0; numbers < 10; numbers++)
	{
		printf("%d", numbers);
	}
	printf("\n");

	return (0);
}
