#include <stdio.h>
int main(void)
{
	const int minute_per_hour = 60;
	int input_num;

	printf("시간을 분 단위로 입력하세요. (0을 누르면 중단)\n");
	scanf("%d", &input_num);
	while ( input_num > 0 )
	{
		printf("시간을 분 단위로 입력하세요. (0을 누르면 중단)\n");
		scanf("%d", &input_num);
		printf("%d 시간 %d 분\n", input_num / minute_per_hour, input_num % minute_per_hour);
	}
	
	return 0;
}
