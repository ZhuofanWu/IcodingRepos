#include<stdio.h>
int main(void)
{
	char sentence[128];
	int bit, i;
	printf("Enter message to be encrypted:\n");
	gets(sentence);
	printf("Enter shift amount (1-25):\n");
	scanf_s("%d", &bit);
	for ( i = 0; i < (sizeof(sentence)/sizeof(sentence[0])); i++)
	{
		if (sentence[i]<=64||sentence[i]>=123||(sentence[i]>=91&&sentence[i]<=96))
		{
			sentence[i] = sentence[i];
		}
		else
		{
			if (sentence[i] <= 90 && (90 - sentence[i]) < bit)
			{
				sentence[i] = sentence[i] + bit - 26;
			}
			else
			{
				if (sentence[i] >= 97 && (122 - sentence[i]) < bit)
				{
					sentence[i] = sentence[i] + bit - 26;
				}
				else
				{
				sentence[i] = sentence[i] + bit;
				}
				
			}
		}
	}
	puts(sentence);

	return 0;
}