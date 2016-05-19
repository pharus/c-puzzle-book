/*
 * pharus solved this @ Qui Mai 19 20:06:16 WEST 2016
 *
 * */
#include <stdio.h>

#define PRINT(int) printf("%d\n", int)

int
main(void)
{
	int x, y, z;

	x = 2; y = 1; z = 0;
	x = x && y || z; PRINT(x); /* 1 */
	PRINT( x || ! y && z);     /* 1 */

	x = y = 1;
	z = x ++ - 1; PRINT(x); PRINT(z); /* 2\n0 */
	z += - x ++ + ++y; PRINT(x); PRINT(z); /* 3\n0*/
	z = x / ++ x; PRINT(z); /* as increment is present with presence of the var in the expression, it is undefined */

	return 0;
}

