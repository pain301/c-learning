char *Question55 = "Q55:请编写函数fun，该函数的功能是：将m行n列的二维数组中的数据，按行的顺序依次放到一维数组中，一维数组中数据的个数存放在形参n所指的储存单元中。";

#include "head.h"
#define M 10
#define N 20

void Q55()
{
	puts(Question55);
	int num[M][N],c_num[M*N];
	int i, j;
	srand(time(NULL));
	for (i = 0; i < M*N; ++i){
		*(*num + i) = rand()%100;
	}
	printf("The element in matrix are:\n");
	for (i = 0; i < M; ++i){
		for (j = 0; j < N; ++j){
			c_num[i*N+j]=num[i][j];
			printf("%d ", num[i][j]);
		}
		printf("\n");
	}
	printf("The element in new array are:\n");
	for (i = 0; i < M*N; ++i){
		printf("%d ",c_num[i]);
	}
	printf("\n");
}