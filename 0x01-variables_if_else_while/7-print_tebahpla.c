#include <stdio.h>

/**
 * main - entry point
 *
 * Description: using the main function
 *
 * this program prints " the lowercase alphabet in reverse
 *
 * Return: alway returns 0
 *
 */

int main(void)

{

	char c;

	for (c = 'z'; c >= 'a'; c--)

	{

		putchar(c);

	}

	putchar('\n');

	return (0);

}
