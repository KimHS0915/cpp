#include <stdio.h>
#include <string.h>
int main(void)
{
	char name[30];
	int width;

	printf("Your name : ");
	scanf("%s", name);
	printf("\"%s\"\n", name);
	printf("\"%20s\"\n", name);
	printf("\"%-20s\"\n", name);
	width = strlen(name) + 3;
	printf("%*s\n", width, name);

	return 0;
}
