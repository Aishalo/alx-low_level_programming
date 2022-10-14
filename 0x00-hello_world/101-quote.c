#include <stdio.h>

/**
 * main - The body
 * We use a different type of header
 * Return: 1 for reasons yet discovered
 */

int main(void)
{
	char err[] = "and that piece ofo art is useful\" - Dora Korpar, 2015-10-19\n";

	write(2, err, 59);

	return (1);

}
