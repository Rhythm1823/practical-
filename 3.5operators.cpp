#include<stdio.h>

int main()

{

  int a,b;
  char c;
  printf ("Enter any one operator +, -, *, / \n");
  scanf(" %c", &c);
  printf (" Enter two numbers \n");
  scanf (" %d%d",&a, &b);
  switch(c)
  {
    case '+': 
    printf("\n The sum is %d",a+b);
    break;

    case '-':
    printf("\n The difference is %d",a-b);
    break;

    case '*': 
    printf("/n The product is %d",a*b);
    break;

    case '/': 
    printf("/n The quotient is %.2f",(float)a/b);
    break;

    default: printf ("n Invalid entry");
  }

  return 0;
}
