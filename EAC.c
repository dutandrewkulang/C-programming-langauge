#include <stdio.h>

void main(void)
{
	char country[100] = Uganda;

	switch (country){
		case 'Uganda':
		case 'South Sudan':
		case 'Tanzania':
		case 'Kenya':
		case 'Rwanda':
		case 'Congo':
			printf("%c is a member of the EAC community\n");
			break;
		default:
				printf("Great country to be in\n");

		}
}
