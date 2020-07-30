#include <stdio.h>
int main(void)
{
	int num, i;

	printf("정수를 입력하세요\n");
	scanf("%d", &num);
	i = num;
	while (i < num + 11)
	{
		printf("%d\t", i);
		i++;
	}
	printf("\n");

	return 0;
}
