#include <stdio.h>

/**
 * main - entry point
 *
 * Description: using the main function
 *
 * this program prints "the alphabet in lower case and then in uppercase
 *
 * Return: 0
 */

int main(void)

{

	char ch;

	char h;

	for (ch = 'a' ; ch <= 'z' ; ch++)

	{

		putchar(ch);

	}

	for (h = 'A' ; h <= 'Z' ; h++)

	{

		putchar(h);

	}

	putchar('\n');

	return (0);

}
