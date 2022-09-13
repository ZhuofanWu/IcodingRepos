#include<stdio.h>
int main(void)
{
	int min, s;
	printf("Enter a 24-hour time:\n");
	scanf_s("%d:%d", &min, &s);
	switch (min)
	{
	case 24:
		printf("Equivalent 12-hour time:12:00 AM"); break;
	case 0:
		if (s < 10)
		{
			printf("Equivalent 12-hour time:12:0%d AM", s); break;
		}
		else
		printf("Equivalent 12-hour time:12:%d AM", s); break;
	case 1: case 2:case 3:case 4:case 5:case 6:case 7:case 8:case 9:case 10:case 11:
		if (s < 10)
		{
			printf("Equivalent 12-hour time:%d:0%d AM", min, s); break;
		}
		else
		printf("Equivalent 12-hour time:%d:%d AM", min, s); break;
	case 12:
		if (s < 10)
		{
			printf("Equivalent 12-hour time:12:0%d PM", s); break;
		}
		else
		{
			printf("Equivalent 12-hour time:12:%d PM", s); break;
		}
	case 13: case 14:case 15:case 16:case 17:case 18:case 19:case 20:case 21:case 22:case 23:
		min = min - 12;
		if (s < 10)
		{
			printf("Equivalent 12-hour time:%d:0%d PM", min, s);
		}
		else
		{
			printf("Equivalent 12-hour time:%d:%d PM", min, s);
		}
		break;
	}
	return 0;
}
