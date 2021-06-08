// roots of quadratic using switch
#include <stdio.h>
#include <math.h>

int main()
{
	int n;
	float a,b,c,x1,x2,x3,d;
	printf(" enter the coefficients a b and c \n");
	scanf("%f%f%f",&a,&b,&c);
	d= b*b-4*a*c;
	if (a==0)
	{
		printf(" not a quadratic equation ");
		return 0;
	}
	if (d>0)
		{
			n=1;	
		}
		
		else if (d<0)
		{
			n=2;
		}
		else if  (d==0)
		{
			n=3;
		}
	switch (n)
	{
		case 1:
				x1= (-b+sqrt(d))/2*a;
			x2= (-b-sqrt(d))/2*a;
				printf(" the roots are real and unequal they are: %.21f and %.21f ",x1,x2);
				break;
			case 2:
					printf(" the roots are imaginary \n");
        x1 = -b / (2 * a);
        x2 = sqrt(-d) / (2 * a);
        printf("first root = %.2lf+%.2lfi and second root = %.2f-%.2fi", x1, x2, x1, x2);
        break;
        case 3:
        		printf(" the roots are real and equal they are %f ", -b/(2*a));
        		break;
	}
return 0;
}






