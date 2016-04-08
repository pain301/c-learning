char *Question77 = "Q77:请编写一个函数fun，其功能是：将两个两位数的正整数ab合并形成一个整数放在c中。合并方式是：将a数的十位和个位数依次放在c数的个位和百位上，b数的十位和个位数依次放在c数的十位和千位上。";

#include "head.h"

void Q77()
{
	puts(Question77);
	int a, b, c;
	int a1, a2, b1, b2;
	printf("Please enter two numbers:\n");
	scanf("%d %d", &a, &b);
	a2 = a % 10;
	a1 = a / 10 % 10;
	b2 = b % 10;
	b1 = b / 10 % 10;
	c = a2 * 1000 + b1 * 100 + a1 * 10 + b2;
	printf("The new number is : %d\n", c);
}