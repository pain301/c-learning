char *Question81 = "Q81:请编写函数fun，其功能使：将两个两位正整数a b合并形成一个整数放在c中。合并的方式使：将a数的十位和个位数依次放在c数的百位和个位上，b数的十位和个位数依次放在c数的千位和十位上。";

#include "head.h"

void Q81()
{
	puts(Question81);
	int a, b, c;
	int a1, a2, b1, b2;
	printf("Please enter two numbers:\n");
	scanf("%d %d", &a, &b);
	a2 = a % 10;
	a1 = a / 10 % 10;
	b2 = b % 10;
	b1 = b / 10 % 10;
	c = b1 * 1000 + a1 * 100 + b1 * 10 + a2;
	printf("The new number is : %d\n", c);
}