#include <stdio.h>
#include <math.h>

int main()
{
char  seq[6000];
int i=0;

printf("Please enter a DNA sequence:\n");

scanf("%s", seq);
while (seq[i]!=0) {i++;}
if(seq[0]=='A' && seq[1]=='T' && seq[2]=='G'&& 
   seq[i-1]=='A'|| seq[i-1]=='G' &&
   seq[i-2]=='A'|| seq[i-2]=='G' && seq[i-3]=='T')
		{
		printf("The DNA sequence is a coding DNA sequence !!!\n");
		}
	else 
		{
		printf("The DNA sequence is not a coding sequence :-(\n");
		}








}
