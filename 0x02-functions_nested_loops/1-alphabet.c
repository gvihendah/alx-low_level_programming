#include "main.h"

/**
 * print_alphabet - Print the alphabet, lowercase
 * Followed by a new line
 */

void print_alphabet(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ++ch)
		_putchar(ch);
	_putchar('\n');
}
