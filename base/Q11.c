char *Question11 = "Q11:下列程序定义了n×n的二维数组，并在主函数中自动赋值。请编写函数 fun(int a[][n]),该函数的功能是：使数组左下半三角元素中的值全部置成0";

#include<stdio.h>
#define n 10

void resetZero(int a[][n])
{
	int i, j;
	for (i = 0; i < n; ++i)
	for (j = 0; j <= i; ++j)
		a[i][j] = 0;
}

void Q11()
{
	puts(Question11);
	int i, j, a[n][n];
	for (i = 0; i < n; ++i)
	for (j = 0; j < n; ++j)
		a[i][j] = n*i + j + 1;
	resetZero(a);
	for (i = 0; i < n; ++i)
	{
		for (j = 0; j < n; ++j)
			printf("%2d ", a[i][j]);
		printf("\n");
	}
}