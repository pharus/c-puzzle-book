/*
 * pharus solved this @ Qui Mai 19 20:14:44 WEST 2016
 *
 * */
#include <stdio.h>

#define PRINT(int) printf(#int " = %d\n", int)

int
main(void)
{
	int x, y, z;

	x = 03; y = 02; z = 01;

	/* int as in expr */
	PRINT( x | y & z );   /* int = 3 */
	PRINT( x | y & - z ); /* int = 3 */
	PRINT( x ^ y & - z ); /* int = 1 */
	PRINT( x & y && z );  /* int = 1 */

	x = 1; y = -1;
	PRINT( ! x | x ); /* int = 1 */
	PRINT( - x | x ); /* int = -1 */
	PRINT( x ^ x );   /* int = 0 */
	x <<= 3; PRINT(x); /* int = 8 */
	y <<= 3; PRINT(y); /* int = -8 */
	y >>= 3; PRINT(y); /* Undefined Behaviour, 
						  caught this studying the solution.
						  Apparently, according to reference,
						  the shift doesn't guarantee it to
						  be arithmethically correct.
						  */
	return 0;
}

