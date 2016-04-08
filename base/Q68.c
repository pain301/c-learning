char *Question68 = "Q68:请编写函数fun，其功能时：计算并输出下列多项式的值：sn = 1 + 1 / 1!+ 1 / 2!+ 1 / 3!+ 1 / 4!+ … + 1 / n!";

#include "head.h"

void Q68()
{
	puts(Question68);
	double sn=1.0;
	long s = 1, n, i;
	printf("Please input a number : ");
	scanf("%ld",&n);
	for (i = 1; i <= n; ++i){
		s = s*i;
		sn += 1.0 / s;
	}
	printf("When n=%ld,sn=1+1/1!+1/2!+1/3!+1/4!+…+1/n!=%.6f\n",n,sn);
}