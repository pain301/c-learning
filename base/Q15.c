char *Question15 = "Q15:请编写一个函数unsigned fun(unsigned w),w使一个大于10的无符号整数，若w使n(n≥2)位的整数，则函数求出w后n－1位的数作为函数值返回。";


#include<stdio.h>

int fun_solution1_Q15(unsigned w)
{
	unsigned wc = w;
	int count = 1;
	do
	{
		wc /= 10;
		count *= 10;
	} while (wc >= 10);
	return w - wc*count;
}

int fun_solution2_Q15(unsigned w)
{
	unsigned int p, nw = 0, sign = 1;
	while (w >= 10)
	{
		p = w % 10;
		nw += p*sign;
		sign *= 10;
		w /= 10;
	}
	return nw;
}

void Q15()
{
	puts(Question15);
	unsigned int w;
	do
	{
		printf("Please input a numbers(>=10):");
		scanf("%d", &w);
	} while (w < 10);
	printf("%d\n", fun_solution2_Q15(w));
}