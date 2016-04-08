/*编写函数fun，它的功能时：计算并输出下列级数和：s=1/1*2+1/2*3+…+1/n(n+1) */

#include "head.h"

void Q70()
{
	int n, i;
	double sn = 0.0;
	int s = 0;
	printf("Please enter a number:\n");
	scanf("%d",&n);
	for (i = 2; i <= n; ++i){
		s = i*(i - 1);
		sn += 1.0 / s;
	}
	printf("When n=%d,s=1/1*2+1/2*3+…+1/n(n+1)=%f\n",n,sn);
}