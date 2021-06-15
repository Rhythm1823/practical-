#include <stdio.h>
int main()
{
	int a,b,c,i,lcm;
	printf(" enter two numbers ");
	scanf("%d%d",&a,&b);
	c= a<b?a:b;
	
	for (i=c;i>=1;i--)
	{
		if (a % i ==0 && b % i==0)
		{
			printf(" hcf is %d \n", i);
		
			break;
		}
		
	}
lcm = (a*b)/i;
		
	
printf(" lcm is %d", lcm);
	return 0;
}
