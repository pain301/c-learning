char *Question8 = "Q8:编写函数fun,功能是：根据以下攻势计算s,计算结果作为函数值返回；n通过形参传入。S=1+1/(1+2)+1/(1+2+3)+…….+1/(1+2+3+4+……+n) ";

#include<stdio.h>

float calculateSum(int n)
{
	float sum = 0, deno = 0;
	int i;
	for (i = 1; i <= n; ++i)
	{
		deno += i;
		sum += 1 / deno;
	}
	return sum;
}

void Q8()
{
	puts(Question8);
	int n;
	float sum;
	printf("Please input a number for the max number in the calculate:");
	scanf("%d", &n);
	sum = calculateSum(n);
	printf("sum=%5.3f\n", sum);
	return 0;
}