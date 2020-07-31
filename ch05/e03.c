#include <stdio.h>
#define DAY_PER_WEEK 7
int main(void)
{
	int days;

	printf("날 수를 입력하세요(0을 누르면 종료)\n");
	scanf("%d", &days);
	while(days > 0)
	{
		printf("%d일은 %d주, %d일입니다.\n",
				days, days / DAY_PER_WEEK, days % DAY_PER_WEEK);
		printf("날 수를 입력하세요(0을 누르면 종료)\n");
		scanf("%d", &days);
	}

	return 0;
}

