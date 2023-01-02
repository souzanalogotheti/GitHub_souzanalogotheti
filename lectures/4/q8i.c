
#include <stdio.h>
#include <math.h>

int main()
{
char b1,b2;
int i=0;

printf("Please enter a DNA sequence:\n");
scanf("%c", &b1);
while (scanf("%c", &b2)==1)
 {
	if (b1=='A' && b2=='T')
	{i++;}
	b1=b2;
 }
	  printf("The total number of AT is: %d\n", i);
	
}
