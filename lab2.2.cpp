// greater number between two using conditional operator
#include <stdio.h>
int main()
{
	float a,b,c;
	printf(" enter any two numbers ");
	scanf("%f%f",&a,&b );
	c= a>b?a:b;
	printf(" the greater number is %.2f", c);
	return 0;
}
