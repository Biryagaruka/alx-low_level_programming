#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 * Description: dertermie wether number is positive, negative or zero
 * Return: 0 (Success)
 */

int main(void)
{
	int n:

	Srand(time(0));
	n = rad() - RAND - MAX / 2;

	if (n > 0)
	{
		printf("%d is apositive number \n", n);
	}
	else if (n == 0)
	{
		prinf("%d is zero \n", n);
	}
	else
	{
		printf("%d is a negative \n", n);
	}
	return (0);
}
