#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 * Description: dertermine wether a number is positive, negative or zero
 * Return: 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf(" %d is apositive number \n ", n);
	}
	else if (n == 0)
	{
		printf(" %d is zero \n ", n);
	}
	else
	{
		printf(" %d is a negative \n ", n);
	}
	return (0);
}