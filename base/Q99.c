char *Question99 = "Q99:请编写函数fun ，其功能是：计算并输出3到n之间所有素数的平方根之和。";

#include "head.h"

void Q99()
{
	puts(Question99);
	int i, n;
	double signal = 0.0, sum = 0.0;
	printf("Please input a number which bigger than 3:\n");
	scanf("%d", &n);
	for (i = 3; i <= n; ++i){
		if (isPrime(i)){
			signal = sqrt(i);
			sum += signal;
		}
	}
	printf("The result is : %f\n", sum);

}