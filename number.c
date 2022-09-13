#include<stdio.h>
int main(void)
{
	char number[256];
	int i = 0, a = 0, b = 0, c = 0, d = 0, e = 0, f = 0, g = 0, h = 0, j = 0, k = 0;
	while ((number[i] = getchar()) != '\n')
	{
		i++;
	}
	for ( i = 0; i < sizeof(number)/sizeof(number[0]); i++)
	{
		switch (number[i])
		{
		case 48:a++; break;
		case 49:b++; break;
		case 50:c++; break;
		case 51:d++; break;
		case 52:e++; break;
		case 53:f++; break;
		case 54:g++; break;
		case 55:h++; break;
		case 56:j++; break;
		case 57:k++; break;
		}
	}
	printf("Digit:\t0\t1\t2\t3\t4\t5\t6\t7\t8\t9\t\n");
	printf("Occurrences:	\t%d\t%d\t%d\t%d\t%d\t%d\t%d\t%d\t%d\t%d\t", a, b, c, d, e, f, g, h, j, k);
	return 0;
}