#include <stdio.h>
void main(void)
{
	int num1=12, num2=2;
	if (num1 < num2){
		printf("%d < %d\n",num1,num2);
	}
	else if (num1 > num2){
		printf("%d > %d", num1, num2);
	}
	else{
		printf("%d equals %d", num1, num2);
	}
}
