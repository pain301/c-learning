char *Question55 = "Q55:���д����fun���ú����Ĺ����ǣ���m��n�еĶ�ά�����е����ݣ����е�˳�����ηŵ�һά�����У�һά���������ݵĸ���������β�n��ָ�Ĵ��浥Ԫ�С�";

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