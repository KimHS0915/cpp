#include <stdio.h>
#define gallon2liter 3.785
#define mile2kilo 1.609
int main(void)
{
	float mile, gallon, answer;
	
	printf("주행한 거리는 몇 마일이고 소비한 휘발유의 양은 몇 갤런인가?");
	scanf("%f %f", &mile, &gallon);
	answer = (gallon * gallon2liter) / (mile * mile2kilo) * 100;
	printf("100킬로미터당 리터수 : %.1f 리터\n", answer);

	return 0;
}
