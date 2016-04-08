char *Question26 = "Q26:���дһ������fun�����Ĺ����ǣ��������¹�ʽ��x��ֵ(Ҫ�����㾫��0.0005����ĳ��С��0.0005ʱֹͣ����)��x/2=1+1/3+1��2/3��5+1��2��3/3��5��7+1��2��3��4/3��5��7��9+��+1��2��3������n/3��5��7��(2n+1)�������к�������뾫��0.0005����������Ϊ3.14����";


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