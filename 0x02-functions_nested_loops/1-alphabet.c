#include "main.h"

/**
 * print_alphabet - prints the english alphabet froom a-z.
 * Return: nothing
 */

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
