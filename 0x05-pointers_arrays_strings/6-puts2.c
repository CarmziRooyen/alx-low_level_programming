#include "main.h"
/**
 * puts2 - Function should only print one character out of two
 * Starting with the first one
 * @str: input
 * Return: Print
 */
void puts2(char *str)
{
	int longi = 0;
	int t = 0;
	char *y = str;
	int o;

	while (*y != '\0')
	{
		y++;
		longi++;
	}
	t = longi - 1;
	for (o = 0; 0 <= t; o++)
	{
		if (0 % 2 == 0)
	{
		_putchar(str[0]);
	}
	}
	_putchar('\n');
}
