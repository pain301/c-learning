char *Question80 = "Q80:程序定义了n×n的二维数组，并在主函数中自动赋值。请编写函数fun,该函数的功能是：使数组左下半三角元素中的值乘以n。";

#include "head.h"
#define N 10
void Q80()
{
	puts(Question80);
	int m[N][N];
	int i, j;
	srand(time(NULL));
	for (i = 0; i < N; ++i){
		for (j = 0; j < N; ++j){
			m[i][j] = rand()%100;
		}
	}
	printf("The old matrix is:\n");

	for (i = 0; i < N; ++i){
		for (j = 0; j < N; ++j){
			printf("%d ", m[i][j]);
		}
		printf("\n");
	}
	for (i = 0; i < N; ++i){
		for (j = 0; j < i; ++j){
			m[i][j] *= N;
		}
	}
	printf("The new matrix is:\n");

	for (i = 0; i < N; ++i){
		for (j = 0; j < N; ++j){
			printf("%d ", m[i][j]);
		}
		printf("\n");
	}
}