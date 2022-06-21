#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * _strncpy - function to copy one string to a destination
 * Return: char ptr
 * @dest: char ptr
 * @src: char ptr
 * @n: int var
 *
 * Description:
 * Author: Alex Senges
 * Date: Feb 11, 2022
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for (; i < n; i++)
		dest[i] = '\0';


	return (dest);
}
