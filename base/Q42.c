char *Question42 = "Q42:���г�������n��n�Ķ�ά���飬�������������Զ���ֵ�����д����fun(int a[][n],int n),�ú����Ĺ����ǣ����������ϰ�����Ԫ���е�ֵ����m��";

/*�������ݣ�56 82 35 31 26 86 62 15 27 93 21 5 17 64 53 16*/

#include "head.h"
#define N 4
void fun(int a[][N], int m)
{
	int i, j;
	for (j = 0; j < N; ++j){
		for (i = 0; j>i; ++i){
			a[i][j] *= m;
		}
	}
}

void printMatrixQ42(int a[][N])
{
	int i, j;
	for (i = 0; i < N; ++i){
		for (j = 0; j < N; ++j){
			printf("%3d ", a[i][j]);
		}
		printf("\n");
	}
}

void Q42()
{
	puts(Question42);
	int a[N][N], i, j;
	printf("Please enter %d*%d numbers.\n", N, N);
	for (i = 0; i < N; ++i){
		for (j = 0; j < N; ++j){
			scanf("%d", *(a + i) + j);
		}
	}
	printf("Your matrix is:\n");
	printMatrixQ42(a);
	fun(a, 5);
	printf("After multiply five.\n");
	printMatrix(a);
}