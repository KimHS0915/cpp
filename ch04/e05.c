#include <stdio.h>
int main(void)
{
	float speed, size, time;

	printf("다운로드 속도는 몇 메가비트인가?\n");
	scanf("%f", &speed);
	printf("파일의 사이즈는 몇 메가바이트인가?\n");
	scanf("%f", &size);
	time = size / (speed / 8);
	printf("초당 %.2f 메가비트, %.2f 메가바이트 파일을\n%.2f초에 다운로드한다.\n",
			speed, size, time);
	
	return 0;	
}
