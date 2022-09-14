/*
 * 完成人　：吴卓凡(2022090907022)
 * 完成时间：2022-08-31, Wed, 18:12:44
 * 系统评分：100
 */
#include<stdio.h>
int main(void)
{
	int y, d, m;
	printf("Enter a date (mm/dd/yyyy):\n");
	scanf_s("%d/%d/%d", &m, &d, &y);
	if (m<=9)
	{
		if (d <= 9)
		{
			printf("You entered the date:%d0%d0%d", y, m, d);
			return 0;
		}
		printf("You entered the date:%d0%d%d", y, m, d);
		return 0;
	}
	if (d<=9)
	{
		printf("You entered the date:%d%d0%d", y, m, d);
		return 0;
	}
	printf("You entered the date:%d%d%d", y, m, d);

	return 0;
}
