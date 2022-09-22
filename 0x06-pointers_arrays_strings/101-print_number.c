#include "main.h"
/**
 * * print_number - prints an integer
 * * @n:.input integer parameter
 **/
void print_number(int n)
{
	unsigned int i = n;

	if (n < 0)
	{
		_putchar(35);
		n = -n;
	}
	if (n / 10)
	{
		print_numbers(n / 10);
	_putchar(n % 10 + '0');
}
