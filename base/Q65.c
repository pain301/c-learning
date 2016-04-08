char *Question65 = "Q65:请编写函数fun，其功能是：将两位数的正整数a、b合并成一个整数放在c中。合并的方式是：将a数的十位和个位数依次放在c数的百位和个位上，b数的十位和个位数依次放在c数的十位和千位上。";

/*测试数据：12 34*/
/*运行结果：4132*/

#include "head.h"

void get(int *a, int *b)
{
	printf("Please input two numbers:\n");
	scanf("%d %d",a,b);
}

void Q65()
{
	puts(Question65);
	int a, b;
	get(&a,&b);
	int merge = 0;
	int a1, a2, b1, b2;
	a2 = a % 10;
	a1 = a / 10 % 10;
	b2 = b % 10;
	b1 = b / 10 % 10;
	merge = b2 * 1000 + a1 * 100 + b1 * 10 + a2;
	printf("The new number is:%d\n",merge);
}
