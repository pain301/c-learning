char *Question98 = "Q98: ���д����fun�����Ĺ����ǣ����㲢���n(����n)�����ܱ�5��9������������Ȼ���ĵ���֮�͡�";

#include "head.h"

void Q98()
{
	puts(Question98);
	int i, n;
	printf("Please input a number:\n");
	scanf("%d",&n);
	double sum = 0.0, signal = 0.0;
	for (i = 1; i <= n; ++i){
		if (i % 5 == 0 || i % 9 == 0){
			signal = 1.0 / i;
			sum += signal;
		}
	}
	printf("The result is: %f\n",sum);
}