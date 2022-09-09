#include <stdio.h>
/**
 * * main - entry point to this program
 * * Return: 0 always
 **/
int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');
	return (0);
}
