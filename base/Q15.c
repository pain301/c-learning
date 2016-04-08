char *Question15 = "Q15:���дһ������unsigned fun(unsigned w),wʹһ������10���޷�����������wʹn(n��2)λ���������������w��n��1λ������Ϊ����ֵ���ء�";


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