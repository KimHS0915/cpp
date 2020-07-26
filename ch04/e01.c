#include <stdio.h>
int main(void)
{
	char first_name[20], last_name[10];
	
	printf("first name : ");
	scanf("%s", first_name);
	printf("last name : ");
	scanf("%s", last_name);
	printf("your name is %s %s\n", last_name, first_name);

	return 0;
}
