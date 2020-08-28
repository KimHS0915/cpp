#include <stdio.h>

int main(void)
{
	int i, j;
	char c;

	printf("enter a letter(A~Z) : ");
	scanf("%c", &c);
	if (!(c >= 'A' && c <= 'Z'))
		return 0;
	i = 0;
	while (i <= c - 'A')
	{
		j = 0;
		while (j < c - 'A' - i)
		{
			printf(" ");
			j++;
		}
		j = 0;
		while (j <= i)
		{
			printf("%c", j + 'A');
			j++;
		}
		j -= 2;
		while (j >= 0 && i != 0)
		{
			printf("%c", j + 'A');
			j--;
		}
		j = 0;
		while (j < c - 'A' - i)
		{
			printf(" ");
			j++;
		}
		printf("\n");
		i++;
	}

	return 0;
}
