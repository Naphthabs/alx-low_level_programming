#include <stdio.h>

/**
 * more_numbers - Entry point
 *
 * Description: print 10 times the numbers from 0 to 14 followed y a new line
 *
 * Return: Always 0 (Success)
 */
int more_numbers(void)
{
	int i;
	int end = 15;
	int multiplier = 10;

	for (i = 0; i < end; i++)
	{
	printf("%d\n", multiplier * i);
	}

	return (0);
}
