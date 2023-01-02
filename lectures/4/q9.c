
#include <stdio.h>
#include <math.h>

int main()
{
char seq[1000];
int i=0,total=0, N=0;

printf("Please enter a DNA sequence:\n");

while (scanf("%s", seq)==1)
 	{
	while(seq[N]!=0){N++;}
	for (i=0; i<N-1;i++)
		{
        	if (seq[i]=='A' && seq[i+1]=='T')
		{total++;}
		}
	
	 printf("The total number of AT is: %d\n", total);
	 total=0;

 	}



}
