/*
 * 完成人　：吴卓凡(2022090907022)
 * 完成时间：2022-08-31, Wed, 17:57:57
 * 系统评分：100
 */
#include<stdio.h>
int main(void)
{
    float amount;
    printf("Please enter an amount:\n");
    scanf_s("%f", &amount); //注意scanf函数提交时需要修改
    printf("with tax added: $%.2f\n", amount * 1.05);
    return 0;
}