char *Question92 = "Q92:请编写函数fun，它的功能是计算：s=(ln(1)+ln(2)+ln(3)+…+ln(m))(0.5),s作为函数值返回。";

#include "head.h"

void Q92()
{
	puts(Question92);
	int i, m;
	double s = 0.0, signal = 0.0,d;
	printf("Please input a number: ");
	scanf("%d",&m);
	for (i = 1; i <= m; ++i){
		signal+= log(i);
		
	}
	s = sqrt(signal);
	printf("When m = %d, s=(ln(1)+ln(2)+ln(3)+…+ln(m))(0.5) = %f \n",m,s);
}