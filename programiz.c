#include <stdio.h>
int main(void)
{	
	double dnum;
	int inum;
	printf("Enter float and integer value: ");
	scanf("%lf %d", &dnum, &inum);


	printf("Double: %.3lf\nInteger:%d\n", dnum, inum);
}
