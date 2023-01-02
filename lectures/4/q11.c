#include <stdio.h>
#include <math.h>

 
int main()
{
char seq[5000];
int i=0, N=0;

printf("Please enter a DNA sequence:\n");
scanf("%s", seq);
while(seq[N]!=0){N++;}
for(i=0; i<N-5; i++)
	{
 	if (seq[i]=='G' && seq[i+1]=='G' && seq[i+2]=='A' && 
	   seq[i+3]=='T' && seq[i+4]=='C' && seq[i+5]=='C') 
		{
	 	printf("The cutting site GGATTC was found in sites %d\n", i+1);
	 	}
	}






}
