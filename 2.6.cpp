//Write a program that asks to enter the marks obtained by a student in seven subjects.
// Display the percentage obtained by the student, assume full marks to be 100 for each subject.//
#include <stdio.h>
int main()
{
	float a,b,c,d,e,f,g,h;
	printf(" enter marks of seven subjects: \n ");
	scanf("%f%f%f%f%f%f%f", &a,&b,&c,&d,&e,&f,&g);
	h= a+b+c+d+e+f+g;
	printf(" You have secured %f%", (h/700)*100);
	return 0;
}

