char *Question80 = "Q80:��������n��n�Ķ�ά���飬�������������Զ���ֵ�����д����fun,�ú����Ĺ����ǣ�ʹ�������°�����Ԫ���е�ֵ����n��";

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