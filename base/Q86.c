char *Question86 = "Q86:请编写函数fun，计算并输出给定10个数的方差。";

#include "head.h"
#define N 10
void Q86()
{
	puts(Question86);
	int num[N], i;
	float sum = 0.0, avg = 0.0, result = 0.0;
	srand(time(NULL));
	for (i = 0; i < N; ++i){
		num[i] = rand()%100;
	}
	for (i = 0; i < N; ++i){
		sum += num[i];
	}
	avg = sum / 10.0;
	sum = 0.0;
	for (i = 0; i < N; ++i){
		sum += pow((num[i]-avg),2.0);
	}
	sum /= 10.0;
	result = pow(sum,0.5);
	printf("The variance of ");
	for (i = 0; i < N; ++i){
		printf("%d ",num[i]);
	}
	printf(" is :%.2f\n",result);
}