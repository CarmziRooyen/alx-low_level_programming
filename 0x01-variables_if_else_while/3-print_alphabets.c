#include <stdio.h>
/**
 * main - Entry block
 * Description: Print the alphabet in lower case
 * Return: Always 0
 */
intmain(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	c = 'A';

	while (c <= 'Z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
