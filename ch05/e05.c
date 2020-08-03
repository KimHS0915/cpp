#include <stdio.h>
int main(void)
{
	int count, sum, num;

	printf("일한 날짜를 알려주세요.\n");
	scanf("%d", &num);
	count = 0;
	sum = 0;
	while (count++ < num)
		sum = sum + count;
	printf("합 = %d\n", sum);

	return 0;
}
