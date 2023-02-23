#include "main.h"

/**
 * _abs - computes an absolute value of an interge
 * @c: the interger to be checked
 * Return: Absolute value of a number or zero
 */

int _abs(int c)
{

	if (c < 0)
	{
		int abs_val;

		abs_val = c * -1;
		return (abs_val);
	}
	return (c);
}
