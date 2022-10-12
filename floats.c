#include <stdio.h>
/*
*
* main - prints out floats
*/
void main(void)
{	
	float shoes = 32.65, shirts = 12.15, caps = 5.10;
	// To ensure the we get two decimals places %.2f

	printf("Shoes cost $%.2f\n", shoes);
	printf("Shirts cost $%.2f\n", shirts);
	printf("Caps cost $%.2f\n", caps);
}
