#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* a program to test wether a number is positive, negative or zero */

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
