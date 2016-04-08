char *Question87 = "Q87:请编写函数fun，其功能是：将两个两位数的正整数a b合并形成一个整数放在c 中。合并的方式是：将a数的十位和个位数依次放在c数的千位和十位上，b数的十位和个位数依次放在c数的个位和百位上";

#include "head.h"

void Q87()
{
	puts(Question87);
	int a, b, c;
	int a1, a2, b1, b2;
	printf("Please enter two numbers:\n");
	scanf("%d %d", &a, &b);
	a2 = a % 10;
	a1 = a / 10 % 10;
	b2 = b % 10;
	b1 = b / 10 % 10;
	c = a1 * 1000 + b1 * 100 + a2 * 10 + b2;
	printf("The new number is : %d\n", c);
}