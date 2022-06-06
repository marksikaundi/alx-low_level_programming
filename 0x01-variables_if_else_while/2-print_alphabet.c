#include <stdio.h>

/**
 * main - entry point
 *
 * Description: using the main function
 *
 * this program prints "the alphabet in lower case
 *
 * Return: 0
 */

int main(void)

{

	char ch;

	for (ch = 'a' ; ch <= 'z' ; ch++)

	{

		putchar(ch);

	}

	putchar('\n');

	return (0);

}
