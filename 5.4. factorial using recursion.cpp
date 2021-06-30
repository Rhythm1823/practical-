//4. WAP TO FIND FACTORIAL OF A NUMBER USING RECURSIVE FUNCTION
#include <stdio.h>
long int fact(int);
int main()
{
	int n;
	printf(" enter any number:");
	scanf("%d",&n);
	printf(" factorial is %ld",fact(n));
	return 0;
}
long int fact(int n)
{
	if (n==1)
	{
	
	return 1;
}
	else
	{
	
	return n*fact(n-1);
}
}
