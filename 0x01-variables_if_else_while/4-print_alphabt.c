#include <stdio.h>

/**
 * main - entry point
 *
 * Description: using the main function
 *
 * this program prints "the alphabet in lower case followed by a new line
 *
 * Return: always 0
 */

int main(void)

{

	char ch;

	for (ch = 'a' ; ch <= 'z' ; ch++)

	{

		if (ch != 'e' && ch != 'q')

		{

			putchar(ch);

		}

	}

	putchar('\n');

	return (0);

}
