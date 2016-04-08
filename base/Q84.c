char *Question84 = "Q84:请编写函数fun，其功能是：将两个两位数的正整数a b合并形成一个整数放在c中，合并的方式是：将a数的十位和个位数依次放在c的个位和百位上，b数的十位和个位数依次放在c数的千位和十位上。";

#include "head.h"

void Q84()
{
	puts(Question84);
	int a, b, c;
	int a1, a2, b1, b2;
	printf("Please enter two numbers:\n");
	scanf("%d %d", &a, &b);
	a2 = a % 10;
	a1 = a / 10 % 10;
	b2 = b % 10;
	b1 = b / 10 % 10;
	c = a1 * 1000 + b2 * 100 + a2 * 10 + b1;
	printf("The new number is : %d\n", c);
}