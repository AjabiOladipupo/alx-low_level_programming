#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * _strstr - function
 * Return: char
 * @haystack: char pointer
 * @needle: char pointer
 *
 * Description:
 * Author: Alex Senges
 * Date: Feb 21, 2022
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j;

	i = 0;
	j = 0;

	while (haystack[i] != '\0')
	{
		while (needle[j] != '\0')
		{
			if (haystack[i + j] != needle[j])
				break;
			j++;
		}
		if (needle[j] == '\0')
		{
			return (haystack + i);
		}
		i++;
	}
	return ('\0');
}
