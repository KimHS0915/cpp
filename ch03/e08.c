#include <stdio.h>
int main(void)
{
	float pints, cups, ounces, tablespoons, teaspoons;

	printf("부피가 얼마인가? (단위:cup)\n");
	scanf("%f", &cups);
	pints = cups / 2;
	ounces = cups * 8;
	tablespoons = ounces / 2;
	teaspoons = tablespoons / 3;	
	printf("%0.1f cups는 %0.1f pints, %0.1f ounces, %0.1f tablespoons, %0.1f teaspoons 이다.\n",
			cups, pints, ounces, tablespoons, teaspoons);
        
	return 0;	
}

