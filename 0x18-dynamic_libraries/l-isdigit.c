#include <stdio.h>
#include <ctype.h>

/**
 * _isdigit - function to check if a param is digit
 * Return: int
 * @c: int
 *
 * Description:
 * Author: Alex Senges
 * Date: Feb 9, 2022
 */

int _isdigit(int c)
{

	if (isdigit(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}

}

