char *Question28 = "Q28:���дһ������fun�����Ĺ����ǣ��ҳ�һά��������Ԫ��������ֵ�������ڵ��±꣬����ֵ�������ڵ��±�ͨ���βδ��ء�����Ԫ���е�ֵ�����������и��衣��������x����������n ��x�е����ݸ�����max������ֵ��index������ֵ����Ԫ�ص��±ꡣ";

#include<stdio.h>
#define M 10
void maxInArray(int x[], int n, int *max, int *index)
{
	int i;
	for (i = 1, *max = x[0], *index = 0; i < n; ++i){
		if (x[i]>*max){
			*max = x[i];
			*index = i;
		}
	}
}

void Q28()
{
	puts(Question28);
	int x[M], max, index, n, i;
	for (i = 0; i < M; ++i)
		scanf("%d", x + i);
	maxInArray(x, M, &max, &index);
	printf("The max number is %d , and it's position is %d.\n", max, index + 1);
	return 0;
}