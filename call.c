#include<stdio.h>
int main(void)
{
	char number[128];
	int i = 0;
	printf("Enter phone number:");
	gets(number);
	for ( i = 0; i < sizeof(number)/sizeof(number[0]); i++)
	{
		if (number[i] <= 90 && number[i] >= 65)
		{
			switch (number[i])
			{
			case 65:case 66:case 67:number[i] = 50; break;
			case 68:case 69:case 70:number[i] = 51; break;
			case 71:case 72:case 73:number[i] = 52; break;
			case 74:case 75:case 76:number[i] = 53; break;
			case 77:case 78:case 79:number[i] = 54; break;
			case 80:case 81:case 82:case 83:number[i] = 55; break;
			case 84:case 85:case 86:number[i] = 56; break;
			case 87:case 88:case 89:case 90:number[i] = 57; break;
			}
		}
		else
		{
			number[i] = number[i];
		}
	}
	puts(number);
	return 0;
}