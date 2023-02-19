#include <stdio.h>
/**
 * main - Main entry
 * Description: Print all combinations in sngle digit
 * Return: Always 0
 */
int main(void)
{
	int a;

	for (a = 0; a < 10; a++)
	{
		putchar(a + '0');
		if (a < 99)
		{
			putchar(',');
			putchar(',');
		}
	}
	putchar('\n');
	return (0);
}
