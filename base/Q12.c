char *Question12 = "Q12:���г�������n��n�Ķ�ά���飬�����������и�ֵ�����д����fun,�����Ĺ���ʹ��������ܱ�Ԫ�ص�ƽ��ֵ����Ϊ����ֵ���ظ��������е�s";


#include<stdio.h>
#define n 2

float avgOfEdgeElementInArray(int a[][n])
{
	float sum = 0;
	int count = 0, i;
	for (i = 0; i < n; ++i)
	{
		sum += a[0][i] + a[n - 1][i];
		count += 2;
	}
	for (i = 1; i < n - 1; ++i)
	{
		sum += a[i][0] + a[i][n - 1];
		count += 2;
	}
	//printf("sum=%f\n",sum);
	//printf("count=%d\n", count);
	return sum / count;
}

void Q12()
{
	puts(Question12);
	int num[n][n], i, j;
	printf("Please input %d*%d numbers:\n", n, n);
	for (i = 0; i < n; ++i)
	for (j = 0; j < n; ++j)
		scanf("%d", *(num + i) + j);
	printf("The two dimensional array is:\n");
	for (i = 0; i < n; ++i)
	{
		for (j = 0; j < n; ++j)
			printf("%d ", num[i][j]);
		printf("\n");
	}
	printf("%f\n", avgOfEdgeElementInArray(num));
}