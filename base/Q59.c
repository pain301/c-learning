char *Question59 = "Q59:��д�����ط��ǣ����Ĺ����ǣ���n����(������n)ͬʱ�ܱ�3��7������������Ȼ��֮�͵�ƽ����s������Ϊ����ֵ����";

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

