char *Question7 = "Q7:���дһ������int fun(int *s,int t,int *k),���������������Ԫ���������е��±겢�����k��ָ�Ĵ��浥Ԫ�С�";

#include<stdio.h>
#define M 20
void maxElemInArray(int *a, int n, int *k)
{
	int i, temp;
	for (i = 1, temp = a[0]; i < n; ++i)
	if (temp < a[i])
	{
		*k = i;
		temp = a[i];
	}
}

void Q7()
{
	puts(Question7);
	int num[M], i;
	printf("Please input %d numbers:\n", M);
	for (i = 0; i < M; ++i)
		scanf("%d", num + i);
	maxElemInArray(num, M, &i);
	printf("The Max number is %d,and its position is %d.", num[i], i + 1);
}