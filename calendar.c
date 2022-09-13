#include<stdio.h>
int main(void)
{
	int a, b, i = 1, c = 1,d;
	printf("Enter number of days in month:\n");
	scanf_s("%d", &a);
	printf("Enter starting day of the week(1=Sun, 7=Sat):\n");
	scanf_s("%d", &b);
	printf("日\t一\t二\t三\t四\t五\t六\t\n");
	
	for (i = 1; i < b; i++)
	{
		printf("\t");
	}
	for ( i = 0; i < 8-b; c++)
	{
		printf("%d\t", c);
		i++;
	}
	printf("\n");
	if (a-c>=7)
	{
		for (i = 0; i < 7; i++)
		{
			printf("%d\t", c);
			c++;
		}
		printf("\n");
	}
	if (a - c >= 7)
	{
		for (i = 0; i < 7; i++)
		{
			printf("%d\t", c);
			c++;
		}
		printf("\n");
	}
	if (a - c >= 7)
	{
		for (i = 0; i < 7; i++)
		{
			printf("%d\t", c);
			c++;
		}
		printf("\n");
	}
	if (a - c >= 7)
	{
		for (i = 0; i < 7; i++)
		{
			printf("%d\t", c);
			c++;
		}
		printf("\n");
	}
	if (a - c >= 7)
	{
		for (i = 0; i < 7; i++)
		{
			printf("%d\t", c);
			c++;
		}
		printf("\n");
	}
	else
	{
		d = c;
		for (i = 0; i < a - d+1; i++)
		{
			printf("%d\t", c);
			c++;
		}
	}
	
	return 0;
}