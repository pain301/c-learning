char *Question97 = "Q97:���д����fun���书���ǣ����㲢������ж���ʽֵ��s = 1 + 1 / (1 + 2) + 1 / (1 + 2 + 3) + ..1 / (1 + 2 + 3�� + 50)";

#include "head.h"

void Q97()
{
	puts(Question97);
	int i, n;
	printf("Please enter a number:");
	scanf("%d",&n);
	double denominator = 1.0;
	double signal = 0.0;
	double sum = 1.0;
	if (n == 1){
		sum = 1;
	}
	for (i = 2; i <= n; ++i){
		denominator += i;
		signal = 1.0 / denominator;
		sum += signal;
	}
	printf("When n = %d , s = 1 + 1 / (1 + 2) + 1 / (1 + 2 + 3) + ..1 / (1 + 2 + 3�� + 50) = %f\n",n,sum);
}