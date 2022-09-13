#include<stdio.h>
int main(void)
{
	int a, b, sum, c;
	printf("Enter numerical grade:");
	scanf_s("%d", &sum);
	if (sum == 100) printf("Letter grade: A");
	if (sum > 100 || sum < 0)
	{
		printf("Error, grade must be between 0 and 100.\n");
	}
	else
	{
		a = sum / 10;
		b = sum % 10;
		switch (a)
		{
		case 9:printf("Letter grade: A"); break;
		case 8:printf("Letter grade: B"); break;
		case 7:printf("Letter grade: C"); break;
		case 6:printf("Letter grade: D"); break;
		default:printf("Letter grade: F");
			break;
		}
	}
	return 0;
}