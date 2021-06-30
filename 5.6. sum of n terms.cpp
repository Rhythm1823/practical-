//6. WAP TO READ A NUMBER N FROM USER AND CALCULATE SUM 0F FIRST N NATURAL NUMBER USING RECURSIVE FUNCTION.
#include <stdio.h>
int sum(int );
int main()
{
	int n;
	printf(" enter any natural number");
	scanf("%d",&n);
	printf(" sum of first %d natural numbers:",n);
	printf("\t%d",sum(n));
return 0;
}
int sum(int n)
{
	int i=0;
	if (i==n)
	{
		return 0;
	}
	else
	{
		return n+ sum(n-1);
	}
	i++;
}
