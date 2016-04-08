char *Question26 = "Q26:请编写一个函数fun，它的功能是：根据以下公式求x的值(要求满足精度0.0005，即某项小于0.0005时停止迭代)：x/2=1+1/3+1×2/3×5+1×2×3/3×5×7+1×2×3×4/3×5×7×9+…+1×2×3×…×n/3×5×7×(2n+1)程序运行后，如果输入精度0.0005，则程序输出为3.14…。";


#include<stdio.h>

double calcFunction(double c)
{
	long denominator = 1, member = 1;
	double term = 1;
	double sum = 0;
	int i = 1;
	do
	{
		sum += term;
		++i;
		member *= i - 1;
		denominator *= 2 * i - 1;
		term = (double)member / (double)denominator;
	} while (term - c>1e-15);
	return 2 * sum;
}

void Q26()
{
	double c;
	printf("Please enter a precision: \n");
	scanf("%lf", &c);
	printf("The result is:%f\n", calcFunction(c));
}