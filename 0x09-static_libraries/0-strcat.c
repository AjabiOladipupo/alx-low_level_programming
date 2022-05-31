#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * _strcat - function to concatenate 2 strings
 * Return: char pointer
 * @dest: char pointer
 * @src: char pointer
 *
 * Description:
 * Author: Oladipupo Ajabi
 * Date: May 31, 2022
 */

char *_strcat(char *dest, char *src)
{
	strcat(dest, src);
	return (dest);
}
