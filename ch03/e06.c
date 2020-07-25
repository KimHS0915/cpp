#include <stdio.h>
int main(void)
{
	int water;
	double answer;

	printf("물의 양은 몇 쿼트인가?\n");
	scanf("%d", &water);
	answer = water * 950 / 3.0e-23;
	printf("물 분자의 개수 : %e\n", answer);

	return 0;
}
