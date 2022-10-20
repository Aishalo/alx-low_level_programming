#include "main.h"

/**
 * print_alphabet_x10 - repeats the print_alphabet 10 times.
 * Return: nothing
 */

vooid print_alphabet_x10(void)
{
	int i;
	char c;

	for (i = 0, i < 10; ++i)
	{
		foor (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
