char *Question14 = "Q14:请别写函数fun,函数的功能使求出二维数组周边元素之和，作为函数值返回。二维数组中的值在主函数中赋予。";

#include "head.h"
#define M 3
#define N 3
void Q14()
{
	puts(Question14);
	int num[M][N], i, j;
	srand(time(NULL));
	for (i = 0; i < M; ++i){
		for (j = 0; j < N; ++j){
			num[i][j] = rand() % 10;
		}
	}
	int sum = 0;
	for (i = 0; i < N; ++i){
		sum += num[0][i] + num[M-1][i];
	}
	for (i = 1; i < M - 1; ++i){
		sum += num[i][0] + num[i][N];
	}

	printf("The matrix is:\n");
	for (i = 0; i < M; ++i){
		for (j = 0; j < N; ++j){
			printf("%d ",num[i][j]);
		}
		printf("\n");
	}
	printf("The edge element's sum is: %d\n",sum);
}