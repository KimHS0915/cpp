#include <stdio.h>
int main(void)
{
	int i, j;
	char c;

	i = 0;
	while (i < 6)
	{
		j = i + 1;
		c = 'F';
		while (j > 0)
		{
			printf("%c", c);
			j--;
			c--;
		}
		i++;
		printf("%c", '\n');
	}
}
