char *Question96 = "Q96:���д����fun���书��ʹ�����㲢�����������(����Ϊ9)��ÿ��������Ԫ��֮ƽ��ֵ��ƽ����֮�͡�";

#include "head.h"
#define N 9
void Q96()
{
	puts(Question96);
	int num[N];
	int i;
	srand(time(NULL));
	for (i = 0; i < N; ++i){
		num[i] = rand()%100;
	}
	double sum = 0.0;
	for (i = 0; i < N - 1; ++i){
		sum += sqrt((num[i]+num[i+1])/2);
	}
	printf("The number is : ");
	for (i = 0; i < N; ++i){
		printf("%d ",num[i]);
	}
	printf("and the result is:%f\n",sum);
}