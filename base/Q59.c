char *Question59 = "Q59:编写函数藏服那，它的功能是：求n以内(不包括n)同时能被3与7整除的所有自然数之和的平方根s，并作为函数值返回";

#include "head.h"

void Q59()
{
	puts(Question59);
	int i, n;
	printf("Please input a number:\n");
	scanf("%d",&n);
	int sum = 0;
	float result;
	for (i = 1; i <= n; ++i){
		if (i % 3 == 0 || i % 7 == 0){
			sum += i;
		}
	}
	result = sqrt(sum);
	printf("The sum is %d, and the result is : %f\n", sum, result);
}

