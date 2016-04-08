char *Question27 = "Q27:请编写一个函数fun,它的功能是：求除1到m之内(含m)能北7或11整除的所有整数放在数组a中，通过n返回这些数的个数。";

#include<stdio.h>
#define M 1000
void funQ27(int a[], int m, int *n)
{
	int i;
	for (i = 1, *n = 0; i <= m; ++i){
		if (i % 7 == 0 || i % 11 == 0)
			a[(*n)++] = i;
	}
}

void Q27()
{
	int a[M], m, n;
	printf("Please enter a number:");
	scanf("%d", &m);
	funQ27(a, m, &n);
	int i;
	for (i = 0; i < n; ++i){
		printf("%d ", a[i]);
	}
	printf("\n");
}