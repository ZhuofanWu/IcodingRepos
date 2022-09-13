#include<stdio.h>
int main(void)
{
	int i=2, a=0;
	printf("Enter a number:");
	scanf_s("%d", &a);
	while (i*i<=a)
	{
		printf("%d\n", i * i);
		if (a < (i + 2) * (i + 2)) break;
		i = i + 2;
	}
	return 0;
}