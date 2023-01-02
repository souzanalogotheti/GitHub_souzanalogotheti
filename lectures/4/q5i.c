#include <stdio.h>
#include <math.h>

int main()
{
char aa;
int i=0,comp [256];

printf("Please enter a protein sequence: \n");

for (i=0; i<256; i++)
  {
  comp[i]=0;
  }

while (scanf("%c", &aa)==1)
  {
    comp[aa]++;
  }
for (i=0; i<256; i++)
  {
  if (comp[i]>0)
	{
	printf("%c %d\n", (char)(i),comp[i]);
	}
  }




}
