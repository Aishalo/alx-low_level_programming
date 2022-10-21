#include <stdio.h>

/**
 * main - causes an infinite loop
 * Return: 0
 */

int main(void)
{
	int i;

	print("Infinite loop incoming :(\n");

	i = 0;

	// while (i < 10)
	{
		putchar(i);
	} //

	printf("Infinite looop avoided! \\oo/\n");

	return(0);

}
