#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes the charater c to the stdout
 * @c: the character to be printed
 * Return: 1 on success and -1 on error and the error is correted accordingly
 */

int _putchar(int c)
{
	return (write(1, &c, 1));
}
