char *Question18 = "Q18:编写程序，实现矩阵(3行3列)的转置(即行列互换)。";

/*测试数据：1 2 3 4 5 6 7 8 9*/
#include<stdio.h>
#define n 3

void reverseQ18(int a[][n])
{
	int i, j;
	for (i = 0; i < n; ++i)
	{
		for (j = 0; j <i; ++j)
		{
			a[i][j] = a[i][j] ^ a[j][i];
			a[j][i] = a[i][j] ^ a[j][i];
			a[i][j] = a[i][j] ^ a[j][i];
		}
	}
}

void Q18()
{
	puts(Question18);
	int arr[n][n], i, j;
	printf("Please enter a %d*%d matrix:\n", n, n);
	for (i = 0; i < n; ++i)
	{
		for (j = 0; j < n; ++j)
		{
			scanf("%d", *(arr + i) + j);
		}
	}
	printf("The matrix you have entered is:\n");
	for (i = 0; i < n; ++i)
	{
		for (j = 0; j < n; ++j)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	reverseQ18(arr);
	printf("After reverse:\n");
	for (i = 0; i < n; ++i)
	{
		for (j = 0; j < n; ++j)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}