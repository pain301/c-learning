char *Question75 = "Q75:���д����fun ���ú����Ĺ��ܣ���m��n�еĶ�ά�����е����ݣ����е�˳ѧ���ηŵ�һά�����С�";

#include "head.h"
#define M 10
#define N 10

void Q75()
{
	puts(Question75);
	int m[M][N],a[M*N], i, j;
	srand(time(NULL));
	for (i = 0; i < M; ++i){
		for (j = 0; j < N; ++j){
			m[i][j] = rand()%100;
		}
	}
	for (j = 0; j < N; ++j){
		for (i = 0; i < M; ++i){
			a[j*N + i] = m[i][j];
		}
	}
	printf("The Matrix is:\n");
	for (i = 0; i < M; ++i){
		for (j = 0; j < N; ++j){
			printf("%d ",m[i][j]);
		}
		printf("\n");
	}
	printf("The array is:\n");
	for (i = 0; i < M*N; ++i){
		printf("%d ",a[i]);
	}
	printf("\n");
}