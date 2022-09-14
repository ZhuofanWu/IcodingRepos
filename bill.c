/*
 * 完成人　：吴卓凡(2022090907022)
 * 完成时间：2022-08-31, Wed, 17:51:18
 * 系统评分：100
 */
#include<stdio.h>
int main(void)
{
	int price, twenty, ten, five, one;
	printf("please enter a dollar amount:\n");
	scanf_s("%d", &price);
	twenty = price / 20;
	price = price - twenty * 20;
	ten = price / 10;
	price = price - ten * 10;
	five = price / 5;
	price = price - five * 5;

	printf("You need:\n$20 bills:%d\n$10 bills:%d\n$5 bills:%d\n$1 bills:%d\n", twenty, ten, five, price);
	return 0;
}