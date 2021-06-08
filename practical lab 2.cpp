//* lab 2.1 area between the circles

#include <stdio.h>
#include <stdlib.h>
#define PI 3.14
int main()
{
	float r1,r2,area;
	printf(" enter radius of two cicles: \n");
	scanf("%f%f",&r1,&r2);
	area = abs(PI* (r1*r1-r2*r2));
	printf(" \n the required area is %f ", area);
	return 0;
	
}
