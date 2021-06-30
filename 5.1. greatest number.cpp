//1. Define a function int greater(int,int) to find the greatest number among two numbers. 
//WAP uses this function to find the greatest number among three numbers
#include <stdio.h>
int greater(int,int);
int main()
{
	int a,b,c,great,final;
	printf(" enter any three numbers \n");
	scanf("%d%d%d",&a,&b,&c);
	great= greater(a,b);
	final= greater(great,c);
	printf(" the greatest number  is %d", final);
}
int greater(int a, int b)
{
	if (a>b)
	{
		return a;
	}
	else
	{
		return b;
	}
}
