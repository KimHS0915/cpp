#include <stdio.h>
int main(void)
{
	char name[30];
	float height;

	printf("이름을 입력하세요\n");
	scanf("%s", name);
	printf("당신의 키는 몇 인치인가요?\n");
	scanf("%f", &height);
	printf("%s 씨, 당신의 키는 %.3f 피트입니다.\n", name, height / 12);

	return 0;
}
