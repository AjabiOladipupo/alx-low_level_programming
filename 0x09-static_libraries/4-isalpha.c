#include <stdio.h>
#include <ctype.h>

/**
 * _isalpha - funtion to check if a param is alpha
 * Return: int
 * @c: int
 *
 * Description:
 * Author: Oladipupo Ajabi
 * Date: May 31, 2022
 */

int _isalpha(int c)
{

	if (isalpha(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
