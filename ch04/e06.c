#include <stdio.h>
#include <string.h>
int main(void)
{
	char first_name[20], last_name[20];
	int f_len, l_len;

	printf("First name : ");
	scanf("%s", first_name);
	printf("Last name : ");
	scanf("%s", last_name);
	f_len = strlen(first_name);
	l_len = strlen(last_name);
	printf("%s %s\n%*d %*d\n", 
			first_name, last_name, f_len, f_len, l_len, l_len);
	printf("%s %s\n%-*d %-*d\n", 
			first_name, last_name, f_len, f_len, l_len, l_len);
	
	return 0;
}
