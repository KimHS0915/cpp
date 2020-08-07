#include <stdio.h>
int main(void)
{
	int i, j;

	i = 0;
	while (i < 5)
	{
		j = i + 1;
		while (j > 0)
		{
			printf("%c", '$');
			j--;
		}
		i++;
		printf("%c", '\n');
	}
}
