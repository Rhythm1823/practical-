#include <stdio.h>
int main()
{
	int n,i,c;
	printf(" enter any number");
	scanf("%d",&n);
	for (i=2;i<n;i++)
	{
		if (n % i ==0)
		{
			c=c+1;
			break;
		}
	}
	if (c>1)
	{
		printf(" composite");
	}
	else
	{
		printf(" prime");
	}
	return 0;
	
}
