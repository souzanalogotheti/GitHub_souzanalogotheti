#include <stdio.h>
#include <math.h>

int main()
{
char b;
int A=0,T=0,G=0,C=0;

printf("Please enter a sequence: \n");
while(scanf("%c", &b)==1)
 { 
	if(b=='A'){A++;} 
	if(b=='T'){T++;} 
	if(b=='C'){C++;}
	if(b=='G'){G++;}
	if(b=='\n')
	{
	printf("Total A: %d, T: %d, G: %d , C: %d ,\n", A,T,G,C);
	}
     
 }



}
