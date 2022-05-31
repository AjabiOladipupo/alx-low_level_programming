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
 * Author: Oladipupo Ajabi
 * Date: May 31, 2022
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
