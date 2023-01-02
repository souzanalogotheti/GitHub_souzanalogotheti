#include <stdio.h>
#include <math.h>

int main()
{
char b1,b2;
int bp=0;
float total=0;

printf("Please insert DNA sequence:\n");
while(scanf("%c", &b1)==1)
	{ bp++;
	  if(b1=='G' || b2=='C')
		{
		total++;
		}
	}
printf("The total percentage of GC is: %2.1f\n", (100.0*total)/(bp-1));
	



}
