#include <stdio.h>
int main(void)
{
	int age;

	printf("your age: ");
	scanf("%d", &age);
	printf("%f seconds\n", age * 3.156e7);

	return 0;
}
