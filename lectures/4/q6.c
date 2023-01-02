#include <stdio.h>
#include <math.h>

int main()
{
char b;

printf("Please enter the DNA sequence:\n");
while (scanf("%c", &b)==1)
 {
	if(b=='A'){printf("T");}
	else if(b=='T'){printf("A");}
	else if(b=='G'){printf("C");}
	else if(b=='C'){printf("G");}
	else {printf("%c",b);}
 }






}
