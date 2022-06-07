#include <unistd.h>
#include "main.h"

/**
 * printf_alphatbet_x10 - print the alphabet 10 times
 *
 * Description: print 10 times
 * Return: Always (0)
 */
//dem
void print_alphabet_x10(void)
{
	int alphabet_count = 0;

	while (alphabet_count < 10)
	{
		char ch = 'a';

		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
		alphabet_count++;
		_putchar('\n');
	}
}
