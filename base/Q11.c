char *Question11 = "Q11:���г�������n��n�Ķ�ά���飬�������������Զ���ֵ�����д���� fun(int a[][n]),�ú����Ĺ����ǣ�ʹ�������°�����Ԫ���е�ֵȫ���ó�0";

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