#include <stdio.h>
#include <math.h>

int main()
{
char seq[1000];

printf("Please enter your sequence:\n");
while(scanf("%s", seq)==1)
	{
	if (seq[0]=='A' && seq[1]=='T' && seq[2]=='G')
		{

		printf("Found sequence: %s\n", seq);
		}

	}


}
