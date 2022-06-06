#include <stdio.h>

/**
 * main - entry point
 *
 * Description: using the main function
 *
 * this program prints "all the numbers of base 16 in lowercase
 *
 * Return: alway returns 0
 */

int main(void)

{

	char c;

	for (c = '0'; c <= '9'; c++)

	{

		putchar(c);

	}

	for (c = 'a'; c <= 'f'; c++)

	{

		putchar(c);

	}

	putchar('\n');

	return (0);

}
