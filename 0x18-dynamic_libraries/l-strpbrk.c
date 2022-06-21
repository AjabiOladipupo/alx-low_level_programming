#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * _strpbrk - function
 * Return: char
 * @s: char pointer
 * @accept: char pointer
 *
 * Description:
 * Author: Alex Senges
 * Date: Feb 21, 2022
 */

char *_strpbrk(char *s, char *accept)
{
	size_t i, j;

	i = 0;

	while (s[i])
	{
		for (j = 0; j < strlen(accept); j++)
		{
			if (accept[j] == s[i])
			{
				return (s + i);
			}
		}
		i++;
	}
	return ('\0');
}
