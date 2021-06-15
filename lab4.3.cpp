#include <stdio.h>
int main()
{
	int i,a=0,b=1,c,n;
	printf(" enter the limit");
	scanf("%d",&n);
	printf("%d \t %d \t",a,b);
	for (a=1;a<=n;a++)
	{
		printf("%d \t",a);
		c=a+b;
		a=b;
		b=c;
	}
	return 0;
}
