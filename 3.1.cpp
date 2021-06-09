//WAP to read the percentage of marks obtained by a student in SLC and +2 level. Display message “CONGRATULATIONS!!! 
//You have first division in both SLC and +2” if both levels have percentage greater than or equal to 60.[nested if] 
#include <stdio.h>
int main()
{
	float a,b;
	printf(" enter your percentage in slc and +2 \n");
	scanf("%f%f", &a,&b);
	if (a>=60)
	{
		if (b>=60)
		{
			printf(" congratulations!!");
		}
	}
	return 0;
}
