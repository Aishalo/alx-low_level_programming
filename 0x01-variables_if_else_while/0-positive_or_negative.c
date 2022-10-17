#include <stdio.h>
#include <stlib.h>
#include <time.h>

/**
 * main - Positive and negative random number 
 * and Zero
 * Return: 0 on success
 */

int main(void)
{
	int n;

	srand(time(o));
	n = rand() - RAND_MAX / 2;

	if (n < 0)
	{
		printf("%d is %s\n", n, "negative");
	}
	else if (n > 0)
	{
		printf("%d is %s\n", n, "positive");
	}
	else
	{
		printf("%d is %s\n", n, "zero");
	}

	return (0);

}
