#include "main.h"
#include<stdio.h>
#include<string.h>
char *string_toupper(char *);
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] = s[i] - 32;

	return (s);
}
