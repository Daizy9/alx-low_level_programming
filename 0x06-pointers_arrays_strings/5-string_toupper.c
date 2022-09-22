#include "main.h"
#include<stdio.h>
#include<string.h>
/**
 * * string_toupper - uppers a lower
 * * @s: character to make upper
 * * Return: return value of upper
 **/
char *string_toupper(char *str)
{
	int i;
	for (i = 0; *str != ''; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
				str[i] -= 32;
	}
	return (str);
}
