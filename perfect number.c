// to determine perfect number
#include <stdio.h>
void main()
{
    int n,i,sum=0,rem;
   printf(" enter any number");
   scanf("%d",&n);
   if (n>0)
   {
       for (i=1;i<n;i++)
       {
           rem= n % i;
           if (rem==0)
           {

            sum +=i;
           }
       }
   }
   if (sum==n)
   {
       printf(" perfect number");
   }
   else
   {
       printf(" not perfect number");
   }
}


