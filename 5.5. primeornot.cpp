//5. DEFINE A FUNCTION WHICH RECEIVES A NUMBER AS ARGUMENT AND RETURNS 1 IF THE NUMBER IS PRIME OTHERWISE RETURN O.
// USE THIS FUNCTION IN MAIN TO CHECK A NUMBER FOR PRIME OR NOT.
#include <stdio.h>
int prime(int);
int main()
{
	int n,check;
	printf(" enter any number");
	scanf("%d",&n);
	check=prime(n);
	if (check==1)
	{
		printf(" prime");
	}
	else
	{
		printf(" not prime");
	}
	return 0;
}
int prime(int n)
{
	int i;
	for (i=2;i<n;i++)
	{
		if (n % i ==0)
		{
			return 0;
			break;
		}
		
		
	}
	return 1;
}
