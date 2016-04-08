char *Question53 = "Q53:���д����fun,�ú����Ĺ����ǣ�ʵ��b=a+a�����Ѿ���a����a��ת�ã�����ھ���b�С���������main�����������";

#include "head.h" 
#define N 3

void matrixAdding(int(*a)[N], int(*b)[N])
{
	int i, j;
	for (i = 0; i < N; ++i){
		for (j = 0; j < N; ++j){
			*(*(b + i) + j) = *(*(a + i) + j) + *(*(a + j) + i);
		}
	}
}
void printMatrix(int(*a)[N])
{
	int i, j;
	for (i = 0; i < N; ++i){
		for (j = 0; j < N; ++j){
			printf("%d ", *(*(a + i) + j));
		}
		putchar(10);
	}
}
void Q53()
{
	puts(Question53);
	int a[N][N], b[N][N];
	int i, j;
	srand(time(NULL));
	for (i = 0; i < N; ++i){
		for (j = 0; j < N; ++j){
			a[i][j] = rand() % 100;
		}
	}
	printf("The Matrix a is:\n");
	printMatrix(a);
	matrixAdding(a, b);
	printf("The matrix b is:\n");
	printMatrix(b);
}