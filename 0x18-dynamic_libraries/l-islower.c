#include <stdio.h>
#include <ctype.h>

/**
 * _islower - funtion to check if a param is lower
 * Return: int
 * @c: int
 *
 * Description:
 * Author: Alex Senges
 * Date: Feb 7, 2022
 */

int _islower(int c)
{

	if (islower(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}

}

