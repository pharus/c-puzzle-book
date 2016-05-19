# Operators 4: Bitwise Operators

Corrected PRINT, according to K&amp;R, 2nd edition

The program outputs:

	x | y & z = 3
	x | y & - z = 3
	x ^ y & - z = 1
	x & y && z = 1
	! x | x = 1
	- x | x = -1
	x ^ x = 0
	x = 8
	y = -8
	y = -1

The last minus one is the output of my compiler, as I come to find out,
it is undefined behaviour.
