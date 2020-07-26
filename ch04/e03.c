#include <stdio.h>
int main(void)
{
	float num;

	printf("floating point number : ");
	scanf("%f", &num);
	printf("a. 입력된 것은 %.1f 또는 %.1e이다.\n", num, num);
	printf("b. 입력된 것은 %+.3f 또는 %.3E이다.\n", num, num);

	return 0;
}

