char *Question10 = "Q10:��д����fun,���Ĺ����ǣ��������µļ򵥵��������󷽳�cos(x)-x=0��һ��ʵ���������������£�(1)ȡx1��ֵΪ0.0��(2)x0 = x1, ��x1��ֵ����x0;(3)x1 = cos(x0), ���һ���µ�x1;(4)��x0 - x1�ľ���ֵС.000001����ִ�в���(5), ����ִ�в���(2);(5)����x1���Ƿ���cos(x) - x = 0��һ��ʵ������Ϊ����ֵ���ء��������root=0.739085��";

#include<stdio.h>
#include<math.h>

float calculate()
{
	float x0, x1 = 0.0;
	do{
		x0 = x1;
		x1 = cos(x0);
	} while (fabs(x0 - x1) >= 1e-6);
	return x1;
}

void Q10()
{
	puts(Question10);
	printf("The root of cos(x)-x=0 is : %f\n", calculate());
	return 0;
}