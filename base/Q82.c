char *Question82 = "Q82:���дһ������fun�����Ĺ���ʹ������n�ſγ̵�ƽ���֣���������Ϊ����ֵ���ء�";

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