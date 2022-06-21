#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * _memcpy - function
 * Return: char pointer
 * @dest: char pointer
 * @src: char
 * @n: unsigned int
 *
 * Description:
 * Author: Alex Senges
 * Date: Feb 21, 2022
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
