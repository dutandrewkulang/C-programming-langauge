#include <stdio.h>

int fruit = 20;

void main(void)
{
	switch (fruit){
		case 1:
			printf("Banana\n");
			break;
		case 2:
			printf("Apple\n");
			break;
		case 3:
			printf("Mangoes\n");
			break;
		case 4:
			printf("Lemon\n");
			break;
		case 5:
			printf("Jack fruit");
			break;
		default:
			printf("We don't have your fruit of choice\n");
	}

}
