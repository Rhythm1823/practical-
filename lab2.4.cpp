// to read a string using scanf and display
#include <stdio.h>
int main()
{
	char name[30];
	printf(" enter the name ");
	scanf("%[^\n]", name);
	printf("%s", name);
	return 0;
}
	
