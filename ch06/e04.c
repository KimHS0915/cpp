#include <stdio.h>

int main(void)
{
	int i, j;
	char c = 'A';

	i = 0;
	while (i < 6)
	{
		j = 0;
		while (j < i + 1)
		{
			printf("%c", c++);
			j++;
		}
		printf("\n");
		i++;
	}
	
	return 0;
}
