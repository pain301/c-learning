char *Question13 = "Q13:请编写一个函数void fun(int tt[m][n],int pp[n]),tt指向一个m行n列的二维函数组，求出二维函数组每列中最小元素，并依次放入pp所指定一维数组中。二维数组中的数已在主函数中赋予。";


/*程序测试数据：56 82 35 31 26 86 62 15 27 93 21 5 17 64 53 16 76 101 66 36*/

#include<stdio.h>
#define m 5
#define n 4

void ministNumInColumn(int tt[m][n], int pp[n])
{
	int i, j, min;
	for (i = 0; i < n; ++i)
	{
		min = tt[0][i];
		for (j = 0; j < m; ++j)
		if (min>tt[j][i])
			min = tt[j][i];
		pp[i] = min;
	}
}

void Q13()
{
	puts(Question13);
	int i, j, num[m][n], min[n];
	printf("Please enter %d*%d numbers:\n", m, n);
	for (i = 0; i < m; ++i)
	for (j = 0; j < n; ++j)
		scanf("%d", *(num + i) + j);
	printf("The numbers in array are:\n");
	for (i = 0; i < m; ++i)
	{
		for (j = 0; j < n; ++j)
			printf("%d ", num[i][j]);
		printf("\n");
	}
	ministNumInColumn(num, min);
	for (i = 0; i < n; ++i)
		printf("%d ", min[i]);
	printf("\n");
}