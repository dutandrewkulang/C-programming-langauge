#include <stdio.h>

void main(void)
{
	int num1, year, num2;
	char name[] = "Dut Andrew Kulang", course[] = "Software Engineering",
	language = 'C', sex[] = "Male";
	num1 = 2022;
	num2 = 2000;
	year = num1 - num2;
	printf("Am %s a %d year old %s %s student learning %c for fun at ALX \n",
	name, year, sex, course, language);
}
