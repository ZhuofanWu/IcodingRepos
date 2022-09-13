#include<stdio.h>
int main(void)
{
	int m, n, c;
	printf("Enter two integers:");
	scanf_s("%d %d", &m, &n);
	while (n != 0)
	{
		c = m % n;
		m = n;
		n = c;;
	}
	printf("Greatest common divisor:%d\n", m);
	return 0;
}