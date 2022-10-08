#include <stdio.h>
int adult = 18; 
void main(void)
{
	int age;
	printf("What is your age\n");
	scanf("%d", &age);

	if (age < adult){
		printf("Your a child. Go home\n");
	}
	else if(age >= adult){
		printf("Welcome to the adults club\n");
	}
}
