char *Question82 = "Q82:请编写一个函数fun，它的功能使：计算n门课程的平均分，计算结果作为函数值返回。";

#include "head.h"
#define N 100
void Q82()
{
	puts(Question82);
	float classScore[N];
	int i;
	srand(time(NULL));
	for (i = 0; i < N; ++i){
		classScore[i] = rand()%101;
	}
	float avg = 0.0, sum = 0.0;

	for (i = 0; i < N; ++i){
		sum += classScore[i];
	}
	avg = sum / N;
	printf("The avg score is:%f\n",avg);
}