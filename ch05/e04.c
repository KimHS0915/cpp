#include <stdio.h>
int main(void)
{
	const float cm2inch = 2.54;
	const double cm2feet = 30.48;
	float cm;

	printf("센티미터 단위로 키를 입력하시오: ");
	scanf("%f", &cm);
	while (cm > 0)
	{
		printf("%.1f 센티미터는 %.lf피트, %.1f인치입니다.\n", cm, cm / 30.48, cm / 2.54);
		printf("센티미터 단위로 키를 입력하시오(끝내려면 <=0): ");
		scanf("%f", &cm);
	}
	printf("안녕!\n");

	return 0;
}
