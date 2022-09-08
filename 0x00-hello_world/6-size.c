#include <stdio.h>
/**
 * main - entry point
 *
 * Return: 0
 */
int main(void)
{
	int A;
	long int B;
	long long int c;
	char D;
	float C;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(D));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(A));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(B))
	printf("Size of a long long int %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of a float %lu byte(s)\n", (unsigned long)sizeof(C));
	return (0);
}

