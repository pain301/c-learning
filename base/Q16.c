char *Question16 = "Q16:请编写一个函数float fun(double h),函数的功能使对变量h中的值保留2位小树，并对第三位进行四舍五入(规定h中的值位正数)。";

#include<stdio.h>

float fun_solution1(double h)
{
	int a = h * 1000;
	int b = a % 10;
	float c;
	if (b >= 5)
	{
		a = h * 100;
		a += 1;
		c = a;
		c = c / 100;
	}
	else
	{
		a = h * 100;
		c = a;
		c = c / 100;
	}
	return c;
}

float fun_solution2(double h)
{
	long a;
	float b;
	h = h * 1000;
	a = (int)(h + 5) / 10;
	return (float)a / 100.0;
}

void Q16()
{

	puts(Question16);
	double h;
	float c;
	printf("Please input a double number:");
	scanf("%lf", &h);
	c = fun_solution2(h);
	printf("%.2f\n", c);
	return 0;
}