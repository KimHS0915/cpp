#include <stdio.h>
void cube(double num);

int main(void)
{
	double num;

	scanf("%lf", &num);
	cube(num);

	return 0;
}

void cube(double num)
{
	printf("%f\n", num * num * num);
}		
