//WAP that ask two operand and an operator among +.-,* and /. Depending upon the entered operator ,evaluate two operands and display the result . 
#include <stdio.h>
int main()
{
	char ch, cha;
	printf(" enter any character: ");
	scanf("%c", &ch);
	if (ch>=65&&ch<=90)
	{
		cha= ch +32;
		printf("%c", cha);
		return 0;
	}
	else if (ch>=97 && ch <=122)
	{
		cha = ch -32;
		printf("%c", cha);
		return 0;
	}
		
		return 0;
}
