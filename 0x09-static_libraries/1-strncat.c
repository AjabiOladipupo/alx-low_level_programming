include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * _strncat - function to concatenate 2 strings
 * Return: char ptr
 * @dest: char ptr
 * @src: char ptr
 * @n: int var
 *
 * Description:
 * Author: Oladipupo Ajabi
 * Date: May 31, 2022
 */

char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
