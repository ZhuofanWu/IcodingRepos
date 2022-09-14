/*
 * 完成人　：吴卓凡(2022090907022)
 * 完成时间：2022-08-31, Wed, 18:29:16
 * 系统评分：100
 */
#include<stdio.h>
int main(void)
{
	float amount, rate, month, permenent, truerate, extra;
	printf("Enter amount of loan:\n");
	scanf_s("%f", &amount);
	printf("Enter interest rate:\n");
	scanf_s("%f", &rate);
	printf("Enter monthly payment:\n");
	scanf_s("%f", &month);
	//输入完毕
	truerate = rate / 12;
	extra = amount * truerate / 100;        //减去每月前给extra赋值余额乘月利率
	permenent = amount - month;
	permenent = permenent + extra;         
	printf("Balance remaining after first payment: $%.2f\n", permenent);
	extra = permenent * truerate / 100;
	permenent = permenent - month;
	permenent = permenent + extra;
	printf("Balance remaining after second payment: $%.2f\n", permenent);
	extra = permenent * truerate / 100;
	permenent = permenent - month;
	permenent = permenent + extra;
	printf("Balance remaining after third payment: $%.2f\n", permenent);
	return 0;
}

//scanf函数需要修改！