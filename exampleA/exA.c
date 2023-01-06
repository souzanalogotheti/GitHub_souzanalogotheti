#include <stdio.h>
#include <math.h>

int main()
{

char seq[5000];
int i=0, N=0;

printf("Please enter a DNA sequence: \n");

scanf("%s",seq);
while(seq[N]!=0) {N++;}

for(i=0;i<N-2;i++)
{

if(seq[i]=='A' && seq[i+1]=='T' && seq[i+2]=='G')
   {
     i++;
	
     if(seq[N]=='A' || seq[N]=='G'
	 && seq[N-1]=='A' || seq[N-1]=='G'
	 && seq[N-2]=='T')
	{
	printf("The DNA sequence that you entered contains coding sequence \n");
	}
     else {printf("The DNA sequence that you entered does NOT contain coding seq \n");}
    }


}

}
