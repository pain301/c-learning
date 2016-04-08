char *Question76 = "Q76:请编写函数fun，其功能时：计算并输出当x<0.97时下列多项式的值，直到｜sn-s(n-1)｜<0.000001为止。Sn = 1 + 0.5x + 0.5(0.5 - 1) / 2!x(2) + … + 0.5(0.5 - 1)(0.5 - 2)…..(0.5 - n + 1) / n!x(n)";

#include "head.h"

void Q76()
{
	double x, sn = 1.0, sign = 1.0, single = 1.0, sum = 0.0, t = 1.0;
	int n=1;
	printf("Please enter a number(<0.97): ");
	scanf("%f",&x);	
	do
	{
		sum += sn;
		t *= n;
		sign = (0.5 - n + 1)*x/t;
		single *= sign;
		sn += single;
		++n;
	} while (fabs(single)<1e-6);
	printf("Sn = 1 + 0.5x + 0.5(0.5 - 1) / 2!x(2) + … + 0.5(0.5 - 1)(0.5 - 2)…..(0.5 - n + 1) / n!x(n)=%lf\n",sum);
}
