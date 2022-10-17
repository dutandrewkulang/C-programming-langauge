#include <stdio.h>
int main(void)
{
	int currentyr, birthyr;
	printf("Enter current year\n");
	scanf("%d", &currentyr);

	printf("Enter year or birth, Eg. 2004\n");

	scanf("%d", &birthyr);
	printf("%d - %d = %d\n", currentyr, birthyr, currentyr - birthyr);
}
