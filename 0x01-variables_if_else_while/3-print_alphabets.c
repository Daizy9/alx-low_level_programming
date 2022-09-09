#include <stdio.h>
/**
 * * main - entry point
 * * Return: 0
 **/
int main(void)
{
	char small = 'a';
	char big = 'A';

	for (; small <= 'z'; small++)
	{
		putchar(small);
	}
	for (; big <= 'Z'; big++)
	{
		putchar(big);
	}
	putchar('\n');
	return (0);
}
