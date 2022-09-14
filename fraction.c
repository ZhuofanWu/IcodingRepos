/*
 * 完成人　：吴卓凡(2022090907022)
 * 完成时间：2022-08-31, Wed, 18:00:21
 * 系统评分：100
 */

/* addfrac.c
 *
 * Adds two fractions
 *
 */


#include <stdio.h>
int main(void)
{
	int num1, denom1, num2, denom2, result_num, result_denom;
	printf("Enter two fractions separated by a plus sign:\n");
	scanf_s("%d/%d+%d/%d", &num1, &denom1, &num2, &denom2);
	//printf("Enter first fraction:\n");
	//scanf_s("%d/%d", &num1, &denom1);

	//printf("Enter second fraction:\n");
	//scanf_s("%d/%d", &num2, &denom2);

	result_num = num1 * denom2 + num2 * denom1;
	result_denom = denom1 * denom2;
	printf("The sum is %d/%d\n", result_num, result_denom);

	return 0;
}
//scanf_s函数需要修改！