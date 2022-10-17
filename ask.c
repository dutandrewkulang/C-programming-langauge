#include <stdio.h>

char fullName[100];
//int age;
void main(void)
{
	printf("Enter your full name: \n");
	scanf("%s", fullName);
	
	printf("Hey %s", fullName);

}
