#include <stdio.h>
void main()
{
    int n,i,j,q,sum=0,rem,f=1;
    printf(" enter any number");
    scanf("%d",&n);
    q=n;
    while (n!=0)
    {
        while(n!=0)
        {
            rem=n % 10;
            for (j=1;j<=rem;j++)
            {
                f= f*j;
            }
            n=n/10;
            sum+=f;
            f=1;
        }

    }
    if (sum==q)
    {
        printf(" strong number");
    }
    else
    {
        printf(" not strong number");
    }
}


