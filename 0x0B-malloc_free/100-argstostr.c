#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * *argstostr - convert arguments on command line to strings
 * * @ac: int type
 * * @av: pointer to array
 * * Return: arguments as strings
 **/
char *argstostr(int ac, char **av)
{
	char *a, *retp;
	int i, j, total;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0, total = 0; i < ac; i++)
	{
		for (j = 0; ((av + i) + j) != '\0'; j++, total++)
			;
		total++;
	}
	total++;
	a = malloc(total * sizeof(char));
	if (a == NULL)
		return (NULL);
	retp = a;
	for (i = 0; i < ac; i++)
		for (j = 0; av[i][j] != '\0'; j++)
		{
			*a = av[i][j];
			a++;
		}
	*a = '\n';
	a++;
}
return (retp);
}
