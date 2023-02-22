#include "main.h"
/**
 * is_lower - Check if char is lowercase
 * @c: Is the char to be checked
 * Return: 1 id char is lowercase, otherwise 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
