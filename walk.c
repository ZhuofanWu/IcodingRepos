#include<stdio.h>
#include<time.h>
int main(void)
{
	char table[10][10];
	int row = 0, line = 0, i, random, b;     //rowΪ�У�lineΪ��
	char character = 'A';
	time_t t;
	for (i = 0; i < 10; i++)
	{
		for (row = 0; row < 10; row++)
		{
			table[row][i] = '.';
		}
	}
	row = 0;
	table[0][0] = 'A';
	while (character < 'Z')
	{
		character++;
	lable:
		srand((unsigned)time(NULL));
		random = (rand() % 65535 + 0) % 4;//line+1���ң�line-1����row+1���£�row-1����
		switch (row)//�жϸ����������������ĸ��Χ�˾�ֱ�����
		{
		case 0:
		{
			switch (line)
			{
			case 0:
			{
				if (table[row][line + 1] != '.' && table[row + 1][line] != '.')
				{
					goto stop;
				}
				break;
			}
			case 9:
			{
				if (table[row][line - 1] != '.' && table[row + 1][line] != '.')
				{
					goto stop;
				}
				break;
			}
			default:
			{
				if (table[row][line + 1] != '.' && table[row][line - 1] != '.' && table[row + 1][line] != '.')
				{
					goto stop;
				}
				break;
			}
			}
			break;
		}
		case 9:
		{
			switch (line)
			{
			case 0:
			{
				if (table[row][line + 1] != '.' && table[row - 1][line] != '.')
				{
					goto stop;
				}
				break;
			}
			case 9:
			{
				if (table[row][line - 1] != '.' && table[row - 1][line] != '.')
				{
					goto stop;
				}
				break;
			}
			default:
			{
				if (table[row][line + 1] != '.' && table[row][line - 1] != '.' && table[row - 1][line] != '.')
				{
					goto stop;
				}
				break;
			}
			}
			break;
		}
		default:
		{
			switch (line)
			{
			case 0:
			{
				if (table[row][line + 1] != '.' && table[row + 1][line] != '.' && table[row - 1][line] != '.')
				{
					goto stop;
				}
				break;
			}
			case 9:
			{
				if (table[row][line - 1] != '.' && table[row + 1][line] != '.' && table[row - 1][line] != '.')
				{
					goto stop;
				}
				break;
			}
			default:if (table[row][line + 1] != '.' && table[row][line - 1] != '.' && table[row + 1][line] != '.' && table[row - 1][line] != '.')
			{
				goto stop;
			}
				   break;
			}
			break;
		}
		}

		switch (random)//�ж����ϻ�������
		{
		case 0:
		{
			line--;
			if (row < 0 || row>9 || line < 0 || line>9)//���ܷɳ�����߽�
			{
				line++;
				goto lable;
			}
			if (table[row][line] != '.')//����ռ�ñ���λ��
			{
				line++;
				goto lable;
			}
			table[row][line] = character;
			break;
		}
		case 1:
		{
			row++;
			if (row < 0 || row>9 || line < 0 || line>9)
			{
				row--;
				goto lable;
			}
			if (table[row][line] != '.')
			{
				row--;
				goto lable;
			}
			table[row][line] = character;
			break;
		}
		case 2:
		{
			line++;
			if (row < 0 || row>9 || line < 0 || line>9)
			{
				line--;
				goto lable;
			}
			if (table[row][line] != '.')
			{
				line--;
				goto lable;
			}
			table[row][line] = character;
			break;
		}
		case 3:
		{
			row--;
			if (row < 0 || row>9 || line < 0 || line>9)
			{
				row++;
				goto lable;
			}
			if (table[row][line] != '.')
			{
				row++;
				goto lable;
			}
			table[row][line] = character;
			break;
		}
		}
	}
	stop:
		for (i = 0; i < 10; i++)
		{
			for ( b = 0; b < 10; b++)
			{
				printf("%c",table[i][b]);
			}
			printf("\n");
		}
	return 0;
}