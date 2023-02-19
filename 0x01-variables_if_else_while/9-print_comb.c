#include <stdio.h>
/**
 * main - Print all possible combinations of single-digt numbers
 * numbers must be sepreated by ,
 * Return: Always 0
 */
int main(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
		if (n != 57)
		{
			putchar(',');
			putchar(',');
		}
	putchar('\n');
	return (0);
}
