#include <stdio.h>
/**
 * main - entry
 * Return: always 0
 */
int main(void)
{
printf("Size of a char: %d byte(s)\n", sezeof(char));
printf("Size of an int: %d byte(S)\n", sizeof(int));
printf("Size of a long int: %d byte(s)\n", sizeof(long int));
printf("Size of a long long int: %d byte(d)\n", sizeof(long long int));
printf("Size of a float: %d byte(s)\n", sizeof(float));
return (0);
}
