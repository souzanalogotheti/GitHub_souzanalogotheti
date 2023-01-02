#include <stdio.h>
#include <math.h>

int main()
{
	float x,y;
	
	printf("Please enter a value:" );
	scanf("%f", &x);
	if (x>0.0)
	{
	y=sqrt(x);
	printf("The sqrt of %f is %f \n", x, y);
	}
	else
	{ 
	printf ("Invalid value \n");
	}


}
