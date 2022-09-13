#include <stdio.h>


int main(void)
{
	int d, i1, i2, i3, i4, i5, j1, j2, j3, j4, j5, first_sum, second_sum, total, check, last;

	printf("Enter the first (single) digit:");
	scanf_s("%1d", &d);

	printf("Enter the first group of five digits:");
	scanf_s("%1d%1d%1d%1d%1d", &i1, &i2, &i3, &i4, &i5);

	printf("Enter the second group of five digits:");
	scanf_s("%1d%1d%1d%1d%1d", &j1, &j2, &j3, &j4, &j5);

	printf("Enter the last (single) digit: ");
	scanf_s("%1d", &last);

	first_sum = d + i2 + i4 + j1 + j3 + j5;
	second_sum = i1 + i3 + i5 + j2 + j4;
	total = 3 * first_sum + second_sum;
	check = 9 - ((total - 1) % 10);
	if (last==check)
	{
		printf("VALID\n");
	}
	else
	{
		printf("NOT VALID\n");
	}

	return 0;
}
