char *Question90 = "Q90:���д����fun���书���ǣ����㲢������ж���ʽֵ:sn=(1-1/2)+(1/3-1/4)+��+(1/(2n-1)1/2n).";

#include "head.h"

void Q90()
{
	puts(Question90);
	double s1 = 0.0, s2 = 0.0, sum = 0.0;
	int i, n;
	printf("Please enter a number:\n");
	scanf("%d",&n);
	for (i = 2; i <= 2*n; ++i){
		s1 = 1.0 / i-1;
		s2 = 1.0 / i;
		sum += s1 - s2;
	}
	printf("When n=%d ,sn=(1-1/2)+(1/3-1/4)+��+(1/(2n-1)1/2n)=%lf\n",n,sum);
}