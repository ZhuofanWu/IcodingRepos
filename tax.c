/*
 * ����ˡ�����׿��(2022090907022)
 * ���ʱ�䣺2022-08-31, Wed, 17:57:57
 * ϵͳ���֣�100
 */
#include<stdio.h>
int main(void)
{
    float amount;
    printf("Please enter an amount:\n");
    scanf_s("%f", &amount); //ע��scanf�����ύʱ��Ҫ�޸�
    printf("with tax added: $%.2f\n", amount * 1.05);
    return 0;
}