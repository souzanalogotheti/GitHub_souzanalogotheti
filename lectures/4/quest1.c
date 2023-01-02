#include <stdio.h>
#include <math.h>

int main()
{
char aa;
int charge;

charge=0;

printf("Please enter the protein sequence:\n To finish press <Ctrl+D>\n");
while(scanf("%c", &aa)==1)
  {
    if (aa=='K'|| aa=='R')
	{
	charge++;
	}
    if (aa=='D' || aa=='E')
	{
	charge--;
	}	
   }

printf("The total charge of the protein is %d\n", charge);



}
