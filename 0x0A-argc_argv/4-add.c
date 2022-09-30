#include <stdio.h>
#include <stdlib.h>
/**
 * * main - Prints the multiplication of two numbers, followed by a new line.
 * * @argc: The number of arguments supplied to the program.
 * * @argv: An array of pointers to the arguments
 * * Return: If the program receives two arguments - 0.
 * *If the program does not receive two arguments - 1.
 **/
int main()
{
	int n,i,num,sum=0;

	printf("Enter number of numbers to sum:");
	scanf("%d",&n);
	i=0;
	printf("Enter %d numbers to sum:",n);
	while(i<n)
			{
				scanf("%d",&num);
				if(num>=0)
				{
					sum=sum+num;
				}
				i++;
			}
	printf("The Sum is: %d",sum);
	return 0;
}
