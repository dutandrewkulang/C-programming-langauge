#include <stdio.h>

int sum(int num1, int num2)
{
	int result = num1 + num2;
	return result;
}

int main(void)
{
	int x = sum(20, 20);
	printf("The result is %d", x);
	return 0;
}
