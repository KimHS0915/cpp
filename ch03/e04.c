#include <stdio.h>
int main(void)
{
	float num;

	printf("부동소수점 수를 입력하시오: ");
	scanf("%f", &num);
	printf("고정소수점 표기: %f\n", num);
	printf("지수 표기: %e\n", num);
	printf("p 표기: %a\n", num);

	return 0;
}

