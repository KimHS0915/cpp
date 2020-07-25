#include <stdio.h>
int main(void)
{
	int inch;
	float answer;

	printf("당신의 키는 몇 인치인가?\n");
	scanf("%d", &inch);
	answer = inch * 2.54;
	printf("당신은 %0.1fcm입니다.\n", answer);

	return 0;
}
