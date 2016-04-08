char *Question93 = "Q93:请编写函数fun，它的功能是计算下列级数和，和值由函数值返回。S = 1 + x + x(2) / 2!+ x(3) / 3!+ …x(n) / n!";

#include "head.h"

void Q93()
{
	puts(Question93);
	long  denominator=1;
	double signal, sum = 0.0, member = 1.0, x;
	int i, n;
	printf("Please input two number(x and n): ");
	scanf("%lf %d",&x,&n);
	for (i = 1; i <= n; ++i){
		member *= x;
		denominator *= i;
		signal = member / denominator;
		sum += signal;
	}
	printf("When x=%lf and n= %d ,S = 1 + x + x(2) / 2!+ x(3) / 3!+ …x(n) / n!= %lf\n",x,n,sum);
}