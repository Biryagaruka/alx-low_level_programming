#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main - Entry point
 *Return: Always 0 (Success)
 */


int main(void)
{

	int n;

	Srand(time(0));
	n = rad() - RAD - MAX / 2;


	if (n > 0)

		{
		printf(" %d is a positve \n", n);
		}

	else if (n == 0)

		{printf(" %d is zero \n", n);
		}

	else

		{printf(" %d is negative \n", n);
		}

	return (0);
}
