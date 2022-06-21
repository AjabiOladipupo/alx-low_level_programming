#include <stdlib.h>
#include "main.h"

/**
 * div - code
 * @a: int
 * @b: int
 *
 * Description:
 * Return: div_t
 */
extern div_t div(int a, int b)
{
		div_t res = 0;
		if (b != 0)
		        res = a / b;
        return (res.quot);
}
