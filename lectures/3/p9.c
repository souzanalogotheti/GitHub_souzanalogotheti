#include <stdio.h>
#include <math.h>

int main()
{
 float val, x[1000];
 int i,N;

 i,N=0;
 while (scanf("%f", &val)==1)
	{
	x[N]=val;
	N++;
	}
 for (i=N-1; i>=0; i--)
	{
	printf("The reversed order of the input values is %f \n", x[i]);
	}

}
