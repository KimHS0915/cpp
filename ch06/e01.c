#include <stdio.h>
int main(void)
{
	char arr[26];
	int i;
	
	i = 0;
	while (i < 26)
	{
		arr[i] = 'a' + i;
		i++;
	}
	i = 0;
	while (i < 26)
	{
		printf("%c", arr[i]);
		i++;
	}
	printf("\n");

	return 0;
}

