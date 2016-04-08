char *Question61 = "Q61:第请编写函数fun，该函数的功能使：统计各年龄段的人数。N个年龄通过调用随机函数获得，并放在主函数的age数组中；要求函数把0至9岁年龄段的人数放在d[0]中，把10至19岁年龄段的人数放在d[1]中，把20至29岁的人数放在d[2]中，其余以此类推，把100岁(含100以上年龄的人数都放在d[10]中。结果在主函数中输出。";

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
			printf("0-9岁有");
			break;
		case 1:
			printf("10-19岁有");
			break;
		case 2:
			printf("20-29岁有");
			break;
		case 3:
			printf("30-39岁有");
			break;
		case 4:
			printf("40-49岁有");
			break;
		case 5:
			printf("50-59岁有");
			break;
		case 6:
			printf("60-69岁有");
			break;
		case 7:
			printf("70-79岁有");
			break;
		case 8:
			printf("80-89岁有");
			break;
		case 9:
			printf("90-99岁有");
			break;
		case 10:
			printf("100 岁以上有");
			break;
		}
		printf("%3d人\n", d[i]);
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