#include "main.h"

/**
 * print_alphabet -  print all alphabet in low case
 */

void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);
	_putchar('\n');
}
