char *Question100 = "Q100:请编写函数fun，其功能是：计算并输出 s=1+(1+2(0.5))+(1+2(0.5)+3(0.5))+…+(1+2(0.5)+3(0.5)+…+n(0.5)) ";

#include "head.h"

void Q100()
{
	puts(Question100);
	int i, n;
	printf("Please input a number:");
	scanf("%d",&n);
	float signal=1, sum = 1.0;
	for (i = 2; i <= n; ++i){
		signal += pow(i, 0.5);
		sum += signal;
	}
	printf("When n = %d, s=1+(1+2(0.5))+(1+2(0.5)+3(0.5))+…+(1+2(0.5)+3(0.5)+…+n(0.5)) = %f\n",n,sum);
}