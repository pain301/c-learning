char *Question3 = "Q3:���д����void fun(int x,int pp[],int *n),���Ĺ����ǣ����������x�Ҳ���ż���ĸ�������������С�����˳�����pp��ָ�������У���Щ�����ĸ���ͨ���β�n���ء�";

#include<stdio.h>
#include<stdlib.h>

void divided(int x, int pp[], int *n)
{
	int i;
	for (i = 1, *n = 0; i < x; ++i)
	if (x%i == 0 && i % 2 != 0)
	{
		pp = (int*)realloc(pp, (*n + 1)*sizeof(int));
		pp[(*n)++] = i;
	}
}

void Q3()
{
	puts(Question3);
	int i, x, n, *pp;
	printf("Please input a number:");
	scanf("%d", &x);
	pp = (int*)malloc(sizeof(int));
	divided(x, pp, &n);
	for (i = 0; i < n; ++i)
		printf("%d ", pp[i]);
}