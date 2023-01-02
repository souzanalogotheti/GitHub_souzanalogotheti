#include <stdio.h>
#include <math.h>

int comp [256];

int main()
{
char aa;
int i=0;

printf("Please enter a protein sequence: \n");

while (scanf("%c", &aa)==1)
  {
    comp[aa]++;
  }
for (i=0; i<256; i++)
  {
  if (comp[i]>0 && i!='\n')
	{
	printf("%c %d\n", (char)(i),comp[i]);
	}
  }




}
