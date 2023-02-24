#include "main.h"
/**
 * main - Print the numbers from 0 - 100 followed by
 * but for mulptiples of three prints Fizz instead of the number
 * and for the multiples of five print Buzz
 * Return: Always 0 (Sucess)
 */
int main(void)
{
	int i;

	for (i =  1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 != 0)
		{
			printf("Fizz");
		} else if (i % 5 == 0 && i % 3 != 0)
		{
			printf("Buzz");
		} else if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz");
		} else if (i == 1)
		{
			printif("%d", i);
		} else
		{
			printf(" %d, i);
		}
	}
	printf("\n");

	return (0);
}


