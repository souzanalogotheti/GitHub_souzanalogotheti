#include <stdio.h>
#include <math.h>

int main()
{
char aa;
int charge;

charge=0;
printf("Please enter a protein sequence:\n");
while(scanf("%c", &aa)==1)
  {
   if(aa=='K' || aa=='R')
	  {
	   charge++;
	  } 
   if(aa=='D' || aa=='E')
	  {
	  charge--;
	   }
   if(aa=='\n')
	{
	printf("The total charge of the proretein sequence is: %d\n", charge);
	charge=0;
	}
   }
   

  




}
