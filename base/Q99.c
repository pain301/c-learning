char *Question99 = "Q99:���д����fun ���书���ǣ����㲢���3��n֮������������ƽ����֮�͡�";

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