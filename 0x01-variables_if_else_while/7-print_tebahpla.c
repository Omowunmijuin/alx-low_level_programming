#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - prints the lowercase alphabet in reverse
 *
 * Return: 0
*/

int main(void)
{
	int r;

	for (r = 'z';; r > 'a'; r++)
	{
		putchar(r);
	}

	putchar('\n');
	return (0);
}
