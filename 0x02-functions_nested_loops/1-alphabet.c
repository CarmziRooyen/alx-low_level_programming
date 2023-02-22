#include "main.h"
/**
 *print_alaphabet - Print all alphabet in lowercase
 */

void print_alaphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);
	_putchar('\n');
}
