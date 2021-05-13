#include <stdio.h>
#include <stdlib.h>

int main()
{
	const int num = 5; 
	/*
		This makes the variable num a constant
		and prevents the program from changing it
	*/
	printf("%d\n", num); 
	//num = 8;
	printf("%d\n", num);

	return 0;
}