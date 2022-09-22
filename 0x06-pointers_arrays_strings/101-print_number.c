#include "main.h"
/**
 * * print_number - prints an integer
 * * @n:.input integer parameter
 **/
void print_number(int n)
{
	unsigned int i = n;

	if (n < 0)
		putchar('-');
		n = -n;
	}
	if (n / 10)
		print(n / 10);
	putchar(n % 10 + '0');
}
