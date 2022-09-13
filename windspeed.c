#include<stdio.h>
int main(void)
{
	float speed;
	printf("Enter a wind speed:\n");
	scanf_s("%f", &speed);
	if (speed < 1) printf("Calm\n");
	else if (speed >= 1 && speed <= 3) printf("Light air\n");
	else if (speed > 3 && speed <= 27) printf("Breeze\n");
	else if (speed > 27 && speed <= 47) printf("Gale\n");
	else if (speed > 47 && speed <= 63) printf("Storm\n");
	else
	{
		printf("Hurricane\n");
	}
	return 0;
}