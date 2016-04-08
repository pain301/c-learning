char *Question61 = "Q61:�����д����fun���ú����Ĺ���ʹ��ͳ�Ƹ�����ε�������N������ͨ���������������ã���������������age�����У�Ҫ������0��9������ε���������d[0]�У���10��19������ε���������d[1]�У���20��29�����������d[2]�У������Դ����ƣ���100��(��100�������������������d[10]�С�������������������";

#include "head.h"

void statisticAge(int *age, int *d)
{
	int i;
	for (i = 0; i < SIZE; ++i){
		if (age[i] >= 110)
			++d[10];
		else{
			++d[age[i] / 10];
		}
	}
}

void print(int *d)
{
	int i;
	for (i = 0; i < 11; ++i){
		switch (i)
		{
		case 0:
			printf("0-9����");
			break;
		case 1:
			printf("10-19����");
			break;
		case 2:
			printf("20-29����");
			break;
		case 3:
			printf("30-39����");
			break;
		case 4:
			printf("40-49����");
			break;
		case 5:
			printf("50-59����");
			break;
		case 6:
			printf("60-69����");
			break;
		case 7:
			printf("70-79����");
			break;
		case 8:
			printf("80-89����");
			break;
		case 9:
			printf("90-99����");
			break;
		case 10:
			printf("100 ��������");
			break;
		}
		printf("%3d��\n", d[i]);
	}
}

void Q61()
{
	puts(Question61);
	int age[SIZE], d[11];
	srand(time(NULL));
	int i;
	for (i = 0; i < SIZE; ++i){
		age[i] = rand() % 150;
	}
	statisticAge(age, d);
	print(age);
	return 0;
}