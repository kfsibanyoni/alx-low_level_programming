#include "main.h"

/**
 * _isupper - checks for uppercase character
 *
 * @c: formal parameter
 *
 * return: 1(success), 0(fail)
 */

int _isupper(int c)
{
	if (c >= 65 && c =< 90){
		return (1);
	}
	else
	{
		return (0);
	}
	putchar('\n');
}
