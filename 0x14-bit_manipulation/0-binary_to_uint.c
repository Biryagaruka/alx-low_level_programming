#include "main.h"
/**
 * binary_to_uint - Entry Point
 * @b: const char
 * Return: 0
 */
unsigned int binary_to_uint(const char *p)
{
	unsigned int res = 0;
	int base = 1, i = 0;

	if (p == NULL)
		return (0);

	while (p[i + 1])
	{
		if (p[i] != '0' && p[i] != '1')
			return (0);
		i++;
	}

	while (i >= 0)
	{
		res += ((p[i] - '0') * base);
		base *= 2;
		i--;
	}


	return (res);

}
