#include <stdio.h>
#include <math.h>

int main()
{
char seq[1000];
int N;

N=0;

printf("Please enter your sequence:\n");
scanf("%s",seq);
while (scanf("%s",seq)==1)
{
while(seq[N]!=0)
	{	
	N++;
	}
if (seq[N-1]=='G' && seq[N-2]=='A' && seq[N-3]=='T')
	{
	printf("Found sequence: %s\n", seq);
	}
}

}
