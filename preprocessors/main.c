#include <stdio.h>
#include "add.h"
#include "sub.h"



int main(void)
{
	int resulta= add(12,12);
	printf("The result using header file is : %d\n", resulta);

	int results = sub(10, 2);
	printf("The subtraction result is : %d\n", results);
	return (0);
}
