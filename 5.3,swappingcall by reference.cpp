//3.WAP TO SWAP THE VALUE OF TWO VARIABLES USING CALL BY REFERENCE.
#include <stdio.h>
void swap (int *a,int *b);
int main()
{
	int a,b;
	printf(" enter any two numbers");
	scanf("%d%d",&a,&b);
	printf(" before swapping: %d\t%d", a,b);
	printf(" \nafter swapping: ");
	swap (&a,&b);
	return 0;
}
void swap(int *a,int *b)
{
	int c;
	c= *a;
	*a=*b;
	*b= c;
	printf("%d \t %d",*a,*b);
}
