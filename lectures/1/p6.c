#include <stdio.h>
#include <math.h>

int main()
{

	float x, y;
	int i;
	for (i=0 ; i<100 ; i++)
	
	{

	printf("Please enter a value:");

	scanf("%f", &x);

	y=sqrt( x );

	printf("The value of sqrt of %f is %f  \n", x, y );
	
	}


}
